﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Contains logging configuration information for an extension.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/LoggingConfig">AWS
   * API Reference</a></p>
   */
  class LoggingConfig
  {
  public:
    AWS_CLOUDFORMATION_API LoggingConfig() = default;
    AWS_CLOUDFORMATION_API LoggingConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API LoggingConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role that CloudFormation should assume
     * when sending log entries to CloudWatch Logs.</p>
     */
    inline const Aws::String& GetLogRoleArn() const { return m_logRoleArn; }
    inline bool LogRoleArnHasBeenSet() const { return m_logRoleArnHasBeenSet; }
    template<typename LogRoleArnT = Aws::String>
    void SetLogRoleArn(LogRoleArnT&& value) { m_logRoleArnHasBeenSet = true; m_logRoleArn = std::forward<LogRoleArnT>(value); }
    template<typename LogRoleArnT = Aws::String>
    LoggingConfig& WithLogRoleArn(LogRoleArnT&& value) { SetLogRoleArn(std::forward<LogRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch Logs group to which CloudFormation sends error logging
     * information when invoking the extension's handlers.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    LoggingConfig& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logRoleArn;
    bool m_logRoleArnHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
