/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/net/URI.h>
#include <aws/core/http/Scheme.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <stdint.h>

namespace Aws
{
    namespace Net {
      template<>
      class SchemeTraits<Http::Scheme> {
      public:
        static const uint16_t HTTP_DEFAULT_PORT = 80;
        static const uint16_t HTTPS_DEFAULT_PORT = 443;

        static const char* ToString(Http::Scheme scheme) {
          return Http::SchemeMapper::ToString(scheme);
        }

        static Http::Scheme FromString(const char* name) {
          return Http::SchemeMapper::FromString(name);
        }

        static uint16_t DefaultPort(Http::Scheme scheme) {
          switch(scheme) {
          case Http::Scheme::HTTP:
              return HTTP_DEFAULT_PORT;
          case Http::Scheme::HTTPS:
              return HTTPS_DEFAULT_PORT;
          }

          AWS_LOGSTREAM_ERROR("Http::URI", "Unknown scheme: '" << ToString(scheme));
          assert(false);
          return 0;
        }
      };
    }

    namespace Http
    {
        static const uint16_t HTTP_DEFAULT_PORT = Net::SchemeTraits<Scheme>::HTTP_DEFAULT_PORT;
        static const uint16_t HTTPS_DEFAULT_PORT = Net::SchemeTraits<Scheme>::HTTPS_DEFAULT_PORT;

        using Net::QueryStringParameterCollection;

        /**
         * class modeling universal resource identifier, but implemented for http
         */
        class AWS_CORE_API URI : public Net::URI<Scheme> {
          public:
            using Net::URI<Scheme>::URI;
        };
        
    } // namespace Http
} // namespace Aws

