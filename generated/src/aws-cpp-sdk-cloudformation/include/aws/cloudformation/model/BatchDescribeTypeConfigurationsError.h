/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/TypeConfigurationIdentifier.h>
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
   * <p>Detailed information concerning an error generated during the setting of
   * configuration data for a CloudFormation extension.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/BatchDescribeTypeConfigurationsError">AWS
   * API Reference</a></p>
   */
  class BatchDescribeTypeConfigurationsError
  {
  public:
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsError();
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsError(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code.</p>
     */
    inline BatchDescribeTypeConfigurationsError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline BatchDescribeTypeConfigurationsError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline BatchDescribeTypeConfigurationsError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message.</p>
     */
    inline BatchDescribeTypeConfigurationsError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline BatchDescribeTypeConfigurationsError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline BatchDescribeTypeConfigurationsError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Identifying information for the configuration of a CloudFormation
     * extension.</p>
     */
    inline const TypeConfigurationIdentifier& GetTypeConfigurationIdentifier() const{ return m_typeConfigurationIdentifier; }

    /**
     * <p>Identifying information for the configuration of a CloudFormation
     * extension.</p>
     */
    inline bool TypeConfigurationIdentifierHasBeenSet() const { return m_typeConfigurationIdentifierHasBeenSet; }

    /**
     * <p>Identifying information for the configuration of a CloudFormation
     * extension.</p>
     */
    inline void SetTypeConfigurationIdentifier(const TypeConfigurationIdentifier& value) { m_typeConfigurationIdentifierHasBeenSet = true; m_typeConfigurationIdentifier = value; }

    /**
     * <p>Identifying information for the configuration of a CloudFormation
     * extension.</p>
     */
    inline void SetTypeConfigurationIdentifier(TypeConfigurationIdentifier&& value) { m_typeConfigurationIdentifierHasBeenSet = true; m_typeConfigurationIdentifier = std::move(value); }

    /**
     * <p>Identifying information for the configuration of a CloudFormation
     * extension.</p>
     */
    inline BatchDescribeTypeConfigurationsError& WithTypeConfigurationIdentifier(const TypeConfigurationIdentifier& value) { SetTypeConfigurationIdentifier(value); return *this;}

    /**
     * <p>Identifying information for the configuration of a CloudFormation
     * extension.</p>
     */
    inline BatchDescribeTypeConfigurationsError& WithTypeConfigurationIdentifier(TypeConfigurationIdentifier&& value) { SetTypeConfigurationIdentifier(std::move(value)); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    TypeConfigurationIdentifier m_typeConfigurationIdentifier;
    bool m_typeConfigurationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
