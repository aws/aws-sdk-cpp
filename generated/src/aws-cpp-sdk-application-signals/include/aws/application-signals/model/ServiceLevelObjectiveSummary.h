/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>A structure that contains information about one service level objective (SLO)
   * created in Application Signals.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceLevelObjectiveSummary">AWS
   * API Reference</a></p>
   */
  class ServiceLevelObjectiveSummary
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveSummary();
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of this service level objective.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ServiceLevelObjectiveSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServiceLevelObjectiveSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServiceLevelObjectiveSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service level objective.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceLevelObjectiveSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceLevelObjectiveSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceLevelObjectiveSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a string-to-string map. It can include the following fields.</p> <ul>
     * <li> <p> <code>Type</code> designates the type of object this service level
     * objective is for.</p> </li> <li> <p> <code>ResourceType</code> specifies the
     * type of the resource. This field is used only when the value of the
     * <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Name</code> specifies the
     * name of the object. This is used only if the value of the <code>Type</code>
     * field is <code>Service</code>, <code>RemoteService</code>, or
     * <code>AWS::Service</code>.</p> </li> <li> <p> <code>Identifier</code> identifies
     * the resource objects of this resource. This is used only if the value of the
     * <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Environment</code>
     * specifies the location where this object is hosted, or what it belongs to.</p>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKeyAttributes() const{ return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    inline void SetKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = value; }
    inline void SetKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::move(value); }
    inline ServiceLevelObjectiveSummary& WithKeyAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetKeyAttributes(value); return *this;}
    inline ServiceLevelObjectiveSummary& WithKeyAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetKeyAttributes(std::move(value)); return *this;}
    inline ServiceLevelObjectiveSummary& AddKeyAttributes(const Aws::String& key, const Aws::String& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, value); return *this; }
    inline ServiceLevelObjectiveSummary& AddKeyAttributes(Aws::String&& key, const Aws::String& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), value); return *this; }
    inline ServiceLevelObjectiveSummary& AddKeyAttributes(const Aws::String& key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, std::move(value)); return *this; }
    inline ServiceLevelObjectiveSummary& AddKeyAttributes(Aws::String&& key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline ServiceLevelObjectiveSummary& AddKeyAttributes(const char* key, Aws::String&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, std::move(value)); return *this; }
    inline ServiceLevelObjectiveSummary& AddKeyAttributes(Aws::String&& key, const char* value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::move(key), value); return *this; }
    inline ServiceLevelObjectiveSummary& AddKeyAttributes(const char* key, const char* value) { m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If this service level objective is specific to a single operation, this field
     * displays the name of that operation.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    inline void SetOperationName(const Aws::String& value) { m_operationNameHasBeenSet = true; m_operationName = value; }
    inline void SetOperationName(Aws::String&& value) { m_operationNameHasBeenSet = true; m_operationName = std::move(value); }
    inline void SetOperationName(const char* value) { m_operationNameHasBeenSet = true; m_operationName.assign(value); }
    inline ServiceLevelObjectiveSummary& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}
    inline ServiceLevelObjectiveSummary& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}
    inline ServiceLevelObjectiveSummary& WithOperationName(const char* value) { SetOperationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this service level objective was created. It is
     * expressed as the number of milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ServiceLevelObjectiveSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ServiceLevelObjectiveSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
