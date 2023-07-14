/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/logging/FormattedLogSystem.h>

namespace Aws
{
namespace Utils
{
namespace Logging
{

class AWS_CORE_API LogcatLogSystem : public FormattedLogSystem
{
    public:

        using Base = FormattedLogSystem;

        LogcatLogSystem(LogLevel logLevel) : Base(logLevel) {}

        virtual ~LogcatLogSystem() {}

        void Flush() override { /* no-op android NDK does not have a flush api */ }

    protected:

	virtual void ProcessFormattedStatement(Aws::String&& statement) override;
};

} // namespace Logging
} // namespace Utils
} // namespace Aws


