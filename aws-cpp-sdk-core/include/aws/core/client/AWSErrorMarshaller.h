/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
    namespace Http
    {
        class HttpResponse;
        enum class HttpResponseCode;
    }

    namespace Client
    {
        enum class CoreErrors;

        template<typename ERROR_TYPE>
        class AWSError;

        /**
         * Marshaller for core error types.
         */
        class AWS_CORE_API AWSErrorMarshaller
        {
        public:            
            virtual ~AWSErrorMarshaller() {}

            /**
             * Converts an exceptionName and message into an Error object, if it can be parsed. Otherwise, it returns
             * and AWSError with CoreErrors::UNKNOWN as the error type.
             */
            virtual AWSError<CoreErrors> Marshall(const Aws::Http::HttpResponse& response) const = 0;
            /**
             * Attempts to finds an error code by the exception name. Otherwise returns CoreErrors::UNKNOWN as the error type.
             */
            virtual AWSError<CoreErrors> FindErrorByName(const char* exceptionName) const;
            virtual AWSError<CoreErrors> FindErrorByHttpResponseCode(Aws::Http::HttpResponseCode code) const;
        protected:
            AWSError<CoreErrors> Marshall(const Aws::String& exceptionName, const Aws::String& message) const;
        };

        class AWS_CORE_API JsonErrorMarshaller : public AWSErrorMarshaller
        {
            using AWSErrorMarshaller::Marshall;
            public:
            /**
             * Converts an exceptionName and message into an Error object, if it can be parsed. Otherwise, it returns
             * and AWSError with CoreErrors::UNKNOWN as the error type.
             */
            AWSError<CoreErrors> Marshall(const Aws::Http::HttpResponse& response) const override;
        };

        class AWS_CORE_API XmlErrorMarshaller : public AWSErrorMarshaller
        {
            using AWSErrorMarshaller::Marshall;
            public:
            /**
             * Converts an exceptionName and message into an Error object, if it can be parsed. Otherwise, it returns
             * and AWSError with CoreErrors::UNKNOWN as the error type.
             */
            AWSError<CoreErrors> Marshall(const Aws::Http::HttpResponse& response) const override;
        };

    } // namespace Client
} // namespace Aws
