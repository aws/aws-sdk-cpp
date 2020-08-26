/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when Salesforce is being used as a source.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SalesforceSourceProperties">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API SalesforceSourceProperties
  {
  public:
    SalesforceSourceProperties();
    SalesforceSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    SalesforceSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The object specified in the Salesforce flow source. </p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }

    /**
     * <p> The object specified in the Salesforce flow source. </p>
     */
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    /**
     * <p> The object specified in the Salesforce flow source. </p>
     */
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    /**
     * <p> The object specified in the Salesforce flow source. </p>
     */
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    /**
     * <p> The object specified in the Salesforce flow source. </p>
     */
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    /**
     * <p> The object specified in the Salesforce flow source. </p>
     */
    inline SalesforceSourceProperties& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    /**
     * <p> The object specified in the Salesforce flow source. </p>
     */
    inline SalesforceSourceProperties& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    /**
     * <p> The object specified in the Salesforce flow source. </p>
     */
    inline SalesforceSourceProperties& WithObject(const char* value) { SetObject(value); return *this;}


    /**
     * <p> The flag that enables dynamic fetching of new (recently added) fields in the
     * Salesforce objects while running a flow. </p>
     */
    inline bool GetEnableDynamicFieldUpdate() const{ return m_enableDynamicFieldUpdate; }

    /**
     * <p> The flag that enables dynamic fetching of new (recently added) fields in the
     * Salesforce objects while running a flow. </p>
     */
    inline bool EnableDynamicFieldUpdateHasBeenSet() const { return m_enableDynamicFieldUpdateHasBeenSet; }

    /**
     * <p> The flag that enables dynamic fetching of new (recently added) fields in the
     * Salesforce objects while running a flow. </p>
     */
    inline void SetEnableDynamicFieldUpdate(bool value) { m_enableDynamicFieldUpdateHasBeenSet = true; m_enableDynamicFieldUpdate = value; }

    /**
     * <p> The flag that enables dynamic fetching of new (recently added) fields in the
     * Salesforce objects while running a flow. </p>
     */
    inline SalesforceSourceProperties& WithEnableDynamicFieldUpdate(bool value) { SetEnableDynamicFieldUpdate(value); return *this;}


    /**
     * <p> Indicates whether Amazon AppFlow includes deleted files in the flow run.
     * </p>
     */
    inline bool GetIncludeDeletedRecords() const{ return m_includeDeletedRecords; }

    /**
     * <p> Indicates whether Amazon AppFlow includes deleted files in the flow run.
     * </p>
     */
    inline bool IncludeDeletedRecordsHasBeenSet() const { return m_includeDeletedRecordsHasBeenSet; }

    /**
     * <p> Indicates whether Amazon AppFlow includes deleted files in the flow run.
     * </p>
     */
    inline void SetIncludeDeletedRecords(bool value) { m_includeDeletedRecordsHasBeenSet = true; m_includeDeletedRecords = value; }

    /**
     * <p> Indicates whether Amazon AppFlow includes deleted files in the flow run.
     * </p>
     */
    inline SalesforceSourceProperties& WithIncludeDeletedRecords(bool value) { SetIncludeDeletedRecords(value); return *this;}

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet;

    bool m_enableDynamicFieldUpdate;
    bool m_enableDynamicFieldUpdateHasBeenSet;

    bool m_includeDeletedRecords;
    bool m_includeDeletedRecordsHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
