/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SFN
{
namespace Model
{

  class AWS_SFN_API ActivityListItem
  {
  public:
    ActivityListItem();
    ActivityListItem(const Aws::Utils::Json::JsonValue& jsonValue);
    ActivityListItem& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline const Aws::String& GetActivityArn() const{ return m_activityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline void SetActivityArn(const Aws::String& value) { m_activityArnHasBeenSet = true; m_activityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline void SetActivityArn(Aws::String&& value) { m_activityArnHasBeenSet = true; m_activityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline void SetActivityArn(const char* value) { m_activityArnHasBeenSet = true; m_activityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline ActivityListItem& WithActivityArn(const Aws::String& value) { SetActivityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline ActivityListItem& WithActivityArn(Aws::String&& value) { SetActivityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline ActivityListItem& WithActivityArn(const char* value) { SetActivityArn(value); return *this;}

    /**
     * <p>The name of the activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the activity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the activity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the activity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the activity.</p>
     */
    inline ActivityListItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the activity.</p>
     */
    inline ActivityListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the activity.</p>
     */
    inline ActivityListItem& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The date the activity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the activity was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the activity was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the activity was created.</p>
     */
    inline ActivityListItem& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the activity was created.</p>
     */
    inline ActivityListItem& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:
    Aws::String m_activityArn;
    bool m_activityArnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
