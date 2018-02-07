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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about a specified
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ServiceSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API ServiceSummary
  {
  public:
    ServiceSummary();
    ServiceSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    ServiceSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID that Route 53 assigned to the service when you created it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that Route 53 assigned to the service when you created it.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that Route 53 assigned to the service when you created it.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID that Route 53 assigned to the service when you created it.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID that Route 53 assigned to the service when you created it.</p>
     */
    inline ServiceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID that Route 53 assigned to the service when you created it.</p>
     */
    inline ServiceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID that Route 53 assigned to the service when you created it.</p>
     */
    inline ServiceSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the service when you
     * create it.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the service when you
     * create it.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the service when you
     * create it.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the service when you
     * create it.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the service when you
     * create it.</p>
     */
    inline ServiceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the service when you
     * create it.</p>
     */
    inline ServiceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that Route 53 assigns to the service when you
     * create it.</p>
     */
    inline ServiceSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline ServiceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline ServiceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description that you specify when you create the service.</p>
     */
    inline ServiceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that have been
     * deleted are not included in the count.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that have been
     * deleted are not included in the count.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances that are currently associated with the service.
     * Instances that were previously associated with the service but that have been
     * deleted are not included in the count.</p>
     */
    inline ServiceSummary& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
