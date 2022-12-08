/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes criteria to restrict the results when listing platform
   * versions.</p> <p>The filter is evaluated as follows: <code>Type Operator
   * Values[1]</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/PlatformFilter">AWS
   * API Reference</a></p>
   */
  class PlatformFilter
  {
  public:
    AWS_ELASTICBEANSTALK_API PlatformFilter();
    AWS_ELASTICBEANSTALK_API PlatformFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API PlatformFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The platform version attribute to which the filter values are applied.</p>
     * <p>Valid values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformBranchName</code> |
     * <code>PlatformLifecycleState</code> | <code>PlatformOwner</code> |
     * <code>SupportedTier</code> | <code>SupportedAddon</code> |
     * <code>ProgrammingLanguageName</code> | <code>OperatingSystemName</code> </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The platform version attribute to which the filter values are applied.</p>
     * <p>Valid values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformBranchName</code> |
     * <code>PlatformLifecycleState</code> | <code>PlatformOwner</code> |
     * <code>SupportedTier</code> | <code>SupportedAddon</code> |
     * <code>ProgrammingLanguageName</code> | <code>OperatingSystemName</code> </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The platform version attribute to which the filter values are applied.</p>
     * <p>Valid values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformBranchName</code> |
     * <code>PlatformLifecycleState</code> | <code>PlatformOwner</code> |
     * <code>SupportedTier</code> | <code>SupportedAddon</code> |
     * <code>ProgrammingLanguageName</code> | <code>OperatingSystemName</code> </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The platform version attribute to which the filter values are applied.</p>
     * <p>Valid values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformBranchName</code> |
     * <code>PlatformLifecycleState</code> | <code>PlatformOwner</code> |
     * <code>SupportedTier</code> | <code>SupportedAddon</code> |
     * <code>ProgrammingLanguageName</code> | <code>OperatingSystemName</code> </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The platform version attribute to which the filter values are applied.</p>
     * <p>Valid values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformBranchName</code> |
     * <code>PlatformLifecycleState</code> | <code>PlatformOwner</code> |
     * <code>SupportedTier</code> | <code>SupportedAddon</code> |
     * <code>ProgrammingLanguageName</code> | <code>OperatingSystemName</code> </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The platform version attribute to which the filter values are applied.</p>
     * <p>Valid values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformBranchName</code> |
     * <code>PlatformLifecycleState</code> | <code>PlatformOwner</code> |
     * <code>SupportedTier</code> | <code>SupportedAddon</code> |
     * <code>ProgrammingLanguageName</code> | <code>OperatingSystemName</code> </p>
     */
    inline PlatformFilter& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The platform version attribute to which the filter values are applied.</p>
     * <p>Valid values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformBranchName</code> |
     * <code>PlatformLifecycleState</code> | <code>PlatformOwner</code> |
     * <code>SupportedTier</code> | <code>SupportedAddon</code> |
     * <code>ProgrammingLanguageName</code> | <code>OperatingSystemName</code> </p>
     */
    inline PlatformFilter& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The platform version attribute to which the filter values are applied.</p>
     * <p>Valid values: <code>PlatformName</code> | <code>PlatformVersion</code> |
     * <code>PlatformStatus</code> | <code>PlatformBranchName</code> |
     * <code>PlatformLifecycleState</code> | <code>PlatformOwner</code> |
     * <code>SupportedTier</code> | <code>SupportedAddon</code> |
     * <code>ProgrammingLanguageName</code> | <code>OperatingSystemName</code> </p>
     */
    inline PlatformFilter& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p>Valid values: <code>=</code> | <code>!=</code> |
     * <code>&lt;</code> | <code>&lt;=</code> | <code>&gt;</code> | <code>&gt;=</code>
     * | <code>contains</code> | <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline const Aws::String& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p>Valid values: <code>=</code> | <code>!=</code> |
     * <code>&lt;</code> | <code>&lt;=</code> | <code>&gt;</code> | <code>&gt;=</code>
     * | <code>contains</code> | <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p>Valid values: <code>=</code> | <code>!=</code> |
     * <code>&lt;</code> | <code>&lt;=</code> | <code>&gt;</code> | <code>&gt;=</code>
     * | <code>contains</code> | <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline void SetOperator(const Aws::String& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p>Valid values: <code>=</code> | <code>!=</code> |
     * <code>&lt;</code> | <code>&lt;=</code> | <code>&gt;</code> | <code>&gt;=</code>
     * | <code>contains</code> | <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline void SetOperator(Aws::String&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p>Valid values: <code>=</code> | <code>!=</code> |
     * <code>&lt;</code> | <code>&lt;=</code> | <code>&gt;</code> | <code>&gt;=</code>
     * | <code>contains</code> | <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline void SetOperator(const char* value) { m_operatorHasBeenSet = true; m_operator.assign(value); }

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p>Valid values: <code>=</code> | <code>!=</code> |
     * <code>&lt;</code> | <code>&lt;=</code> | <code>&gt;</code> | <code>&gt;=</code>
     * | <code>contains</code> | <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline PlatformFilter& WithOperator(const Aws::String& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p>Valid values: <code>=</code> | <code>!=</code> |
     * <code>&lt;</code> | <code>&lt;=</code> | <code>&gt;</code> | <code>&gt;=</code>
     * | <code>contains</code> | <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline PlatformFilter& WithOperator(Aws::String&& value) { SetOperator(std::move(value)); return *this;}

    /**
     * <p>The operator to apply to the <code>Type</code> with each of the
     * <code>Values</code>.</p> <p>Valid values: <code>=</code> | <code>!=</code> |
     * <code>&lt;</code> | <code>&lt;=</code> | <code>&gt;</code> | <code>&gt;=</code>
     * | <code>contains</code> | <code>begins_with</code> | <code>ends_with</code> </p>
     */
    inline PlatformFilter& WithOperator(const char* value) { SetOperator(value); return *this;}


    /**
     * <p>The list of values applied to the filtering platform version attribute. Only
     * one value is supported for all current operators.</p> <p>The following list
     * shows valid filter values for some filter attributes.</p> <ul> <li> <p>
     * <code>PlatformStatus</code>: <code>Creating</code> | <code>Failed</code> |
     * <code>Ready</code> | <code>Deleting</code> | <code>Deleted</code> </p> </li>
     * <li> <p> <code>PlatformLifecycleState</code>: <code>recommended</code> </p>
     * </li> <li> <p> <code>SupportedTier</code>: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p> </li> <li> <p> <code>SupportedAddon</code>:
     * <code>Log/S3</code> | <code>Monitoring/Healthd</code> |
     * <code>WorkerDaemon/SQSD</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The list of values applied to the filtering platform version attribute. Only
     * one value is supported for all current operators.</p> <p>The following list
     * shows valid filter values for some filter attributes.</p> <ul> <li> <p>
     * <code>PlatformStatus</code>: <code>Creating</code> | <code>Failed</code> |
     * <code>Ready</code> | <code>Deleting</code> | <code>Deleted</code> </p> </li>
     * <li> <p> <code>PlatformLifecycleState</code>: <code>recommended</code> </p>
     * </li> <li> <p> <code>SupportedTier</code>: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p> </li> <li> <p> <code>SupportedAddon</code>:
     * <code>Log/S3</code> | <code>Monitoring/Healthd</code> |
     * <code>WorkerDaemon/SQSD</code> </p> </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The list of values applied to the filtering platform version attribute. Only
     * one value is supported for all current operators.</p> <p>The following list
     * shows valid filter values for some filter attributes.</p> <ul> <li> <p>
     * <code>PlatformStatus</code>: <code>Creating</code> | <code>Failed</code> |
     * <code>Ready</code> | <code>Deleting</code> | <code>Deleted</code> </p> </li>
     * <li> <p> <code>PlatformLifecycleState</code>: <code>recommended</code> </p>
     * </li> <li> <p> <code>SupportedTier</code>: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p> </li> <li> <p> <code>SupportedAddon</code>:
     * <code>Log/S3</code> | <code>Monitoring/Healthd</code> |
     * <code>WorkerDaemon/SQSD</code> </p> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The list of values applied to the filtering platform version attribute. Only
     * one value is supported for all current operators.</p> <p>The following list
     * shows valid filter values for some filter attributes.</p> <ul> <li> <p>
     * <code>PlatformStatus</code>: <code>Creating</code> | <code>Failed</code> |
     * <code>Ready</code> | <code>Deleting</code> | <code>Deleted</code> </p> </li>
     * <li> <p> <code>PlatformLifecycleState</code>: <code>recommended</code> </p>
     * </li> <li> <p> <code>SupportedTier</code>: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p> </li> <li> <p> <code>SupportedAddon</code>:
     * <code>Log/S3</code> | <code>Monitoring/Healthd</code> |
     * <code>WorkerDaemon/SQSD</code> </p> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The list of values applied to the filtering platform version attribute. Only
     * one value is supported for all current operators.</p> <p>The following list
     * shows valid filter values for some filter attributes.</p> <ul> <li> <p>
     * <code>PlatformStatus</code>: <code>Creating</code> | <code>Failed</code> |
     * <code>Ready</code> | <code>Deleting</code> | <code>Deleted</code> </p> </li>
     * <li> <p> <code>PlatformLifecycleState</code>: <code>recommended</code> </p>
     * </li> <li> <p> <code>SupportedTier</code>: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p> </li> <li> <p> <code>SupportedAddon</code>:
     * <code>Log/S3</code> | <code>Monitoring/Healthd</code> |
     * <code>WorkerDaemon/SQSD</code> </p> </li> </ul>
     */
    inline PlatformFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The list of values applied to the filtering platform version attribute. Only
     * one value is supported for all current operators.</p> <p>The following list
     * shows valid filter values for some filter attributes.</p> <ul> <li> <p>
     * <code>PlatformStatus</code>: <code>Creating</code> | <code>Failed</code> |
     * <code>Ready</code> | <code>Deleting</code> | <code>Deleted</code> </p> </li>
     * <li> <p> <code>PlatformLifecycleState</code>: <code>recommended</code> </p>
     * </li> <li> <p> <code>SupportedTier</code>: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p> </li> <li> <p> <code>SupportedAddon</code>:
     * <code>Log/S3</code> | <code>Monitoring/Healthd</code> |
     * <code>WorkerDaemon/SQSD</code> </p> </li> </ul>
     */
    inline PlatformFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The list of values applied to the filtering platform version attribute. Only
     * one value is supported for all current operators.</p> <p>The following list
     * shows valid filter values for some filter attributes.</p> <ul> <li> <p>
     * <code>PlatformStatus</code>: <code>Creating</code> | <code>Failed</code> |
     * <code>Ready</code> | <code>Deleting</code> | <code>Deleted</code> </p> </li>
     * <li> <p> <code>PlatformLifecycleState</code>: <code>recommended</code> </p>
     * </li> <li> <p> <code>SupportedTier</code>: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p> </li> <li> <p> <code>SupportedAddon</code>:
     * <code>Log/S3</code> | <code>Monitoring/Healthd</code> |
     * <code>WorkerDaemon/SQSD</code> </p> </li> </ul>
     */
    inline PlatformFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The list of values applied to the filtering platform version attribute. Only
     * one value is supported for all current operators.</p> <p>The following list
     * shows valid filter values for some filter attributes.</p> <ul> <li> <p>
     * <code>PlatformStatus</code>: <code>Creating</code> | <code>Failed</code> |
     * <code>Ready</code> | <code>Deleting</code> | <code>Deleted</code> </p> </li>
     * <li> <p> <code>PlatformLifecycleState</code>: <code>recommended</code> </p>
     * </li> <li> <p> <code>SupportedTier</code>: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p> </li> <li> <p> <code>SupportedAddon</code>:
     * <code>Log/S3</code> | <code>Monitoring/Healthd</code> |
     * <code>WorkerDaemon/SQSD</code> </p> </li> </ul>
     */
    inline PlatformFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of values applied to the filtering platform version attribute. Only
     * one value is supported for all current operators.</p> <p>The following list
     * shows valid filter values for some filter attributes.</p> <ul> <li> <p>
     * <code>PlatformStatus</code>: <code>Creating</code> | <code>Failed</code> |
     * <code>Ready</code> | <code>Deleting</code> | <code>Deleted</code> </p> </li>
     * <li> <p> <code>PlatformLifecycleState</code>: <code>recommended</code> </p>
     * </li> <li> <p> <code>SupportedTier</code>: <code>WebServer/Standard</code> |
     * <code>Worker/SQS/HTTP</code> </p> </li> <li> <p> <code>SupportedAddon</code>:
     * <code>Log/S3</code> | <code>Monitoring/Healthd</code> |
     * <code>WorkerDaemon/SQSD</code> </p> </li> </ul>
     */
    inline PlatformFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
