/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
    namespace Endpoint
    {
        /**
         * A public type that encapsulates the information about an endpoint
         */
        class AWS_CORE_API AWSEndpoint
        {
        public:
            class AWS_CORE_API AWSEndpointAttribute
            {
            public:
                virtual ~AWSEndpointAttribute();
            };


            virtual ~AWSEndpoint();

            const Aws::String& GetURL() const
            {
                return m_url;
            }
            void SetURL(Aws::String url)
            {
                m_url = std::move(url);
            }

            const Aws::UnorderedMap<Aws::String, Aws::UniquePtr<AWSEndpointAttribute> >& GetAttributes() const
            {
                return m_attributes;
            }
            void SetAttributes(Aws::UnorderedMap<Aws::String, Aws::UniquePtr<AWSEndpointAttribute> > attributes)
            {
                m_attributes = std::move(attributes);
            }

            const Aws::UnorderedMap<Aws::String, Aws::String>& GetHeaders() const
            {
                return m_headers;
            }
            void SetHeaders(Aws::UnorderedMap<Aws::String, Aws::String> headers)
            {
                m_headers = std::move(headers);
            }

        protected:
            // A URI containing at minimum the scheme and host. May optionally include a port and a path.
            Aws::String m_url;

            // A grab bag property map of endpoint attributes. The values here are considered unstable.
            Aws::UnorderedMap<Aws::String, Aws::UniquePtr<AWSEndpointAttribute> > m_attributes;

            // A map of additional headers to be set when calling the endpoint.
            // Note: the values in these maps are Lists to support multi-value headers.
            Aws::UnorderedMap<Aws::String, Aws::String> m_headers;
        };
    }
}
