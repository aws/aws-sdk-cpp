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
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsError() = default;
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsError(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    BatchDescribeTypeConfigurationsError& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    BatchDescribeTypeConfigurationsError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifying information for the configuration of a CloudFormation
     * extension.</p>
     */
    inline const TypeConfigurationIdentifier& GetTypeConfigurationIdentifier() const { return m_typeConfigurationIdentifier; }
    inline bool TypeConfigurationIdentifierHasBeenSet() const { return m_typeConfigurationIdentifierHasBeenSet; }
    template<typename TypeConfigurationIdentifierT = TypeConfigurationIdentifier>
    void SetTypeConfigurationIdentifier(TypeConfigurationIdentifierT&& value) { m_typeConfigurationIdentifierHasBeenSet = true; m_typeConfigurationIdentifier = std::forward<TypeConfigurationIdentifierT>(value); }
    template<typename TypeConfigurationIdentifierT = TypeConfigurationIdentifier>
    BatchDescribeTypeConfigurationsError& WithTypeConfigurationIdentifier(TypeConfigurationIdentifierT&& value) { SetTypeConfigurationIdentifier(std::forward<TypeConfigurationIdentifierT>(value)); return *this;}
    ///@}
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
