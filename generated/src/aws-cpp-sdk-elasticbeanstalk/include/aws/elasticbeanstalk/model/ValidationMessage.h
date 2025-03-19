/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ValidationSeverity.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>An error or warning for a desired configuration option value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ValidationMessage">AWS
   * API Reference</a></p>
   */
  class ValidationMessage
  {
  public:
    AWS_ELASTICBEANSTALK_API ValidationMessage() = default;
    AWS_ELASTICBEANSTALK_API ValidationMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ValidationMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A message describing the error or warning.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ValidationMessage& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An indication of the severity of this message:</p> <ul> <li> <p>
     * <code>error</code>: This message indicates that this is not a valid setting for
     * an option.</p> </li> <li> <p> <code>warning</code>: This message is providing
     * information you should take into account.</p> </li> </ul>
     */
    inline ValidationSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(ValidationSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ValidationMessage& WithSeverity(ValidationSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace to which the option belongs.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    ValidationMessage& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the option.</p>
     */
    inline const Aws::String& GetOptionName() const { return m_optionName; }
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }
    template<typename OptionNameT = Aws::String>
    void SetOptionName(OptionNameT&& value) { m_optionNameHasBeenSet = true; m_optionName = std::forward<OptionNameT>(value); }
    template<typename OptionNameT = Aws::String>
    ValidationMessage& WithOptionName(OptionNameT&& value) { SetOptionName(std::forward<OptionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationSeverity m_severity{ValidationSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
