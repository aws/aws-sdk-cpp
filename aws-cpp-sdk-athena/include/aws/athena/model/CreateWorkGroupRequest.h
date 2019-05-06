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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/WorkGroupConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class AWS_ATHENA_API CreateWorkGroupRequest : public AthenaRequest
  {
  public:
    CreateWorkGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The workgroup name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The workgroup name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The workgroup name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The workgroup name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The workgroup name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The workgroup name.</p>
     */
    inline CreateWorkGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The workgroup name.</p>
     */
    inline CreateWorkGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The workgroup name.</p>
     */
    inline CreateWorkGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * encrypting query results, whether the Amazon CloudWatch Metrics are enabled for
     * the workgroup, the limit for the amount of bytes scanned (cutoff) per query, if
     * it is specified, and whether workgroup's settings (specified with
     * EnforceWorkGroupConfiguration) in the WorkGroupConfiguration override
     * client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline const WorkGroupConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * encrypting query results, whether the Amazon CloudWatch Metrics are enabled for
     * the workgroup, the limit for the amount of bytes scanned (cutoff) per query, if
     * it is specified, and whether workgroup's settings (specified with
     * EnforceWorkGroupConfiguration) in the WorkGroupConfiguration override
     * client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * encrypting query results, whether the Amazon CloudWatch Metrics are enabled for
     * the workgroup, the limit for the amount of bytes scanned (cutoff) per query, if
     * it is specified, and whether workgroup's settings (specified with
     * EnforceWorkGroupConfiguration) in the WorkGroupConfiguration override
     * client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetConfiguration(const WorkGroupConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * encrypting query results, whether the Amazon CloudWatch Metrics are enabled for
     * the workgroup, the limit for the amount of bytes scanned (cutoff) per query, if
     * it is specified, and whether workgroup's settings (specified with
     * EnforceWorkGroupConfiguration) in the WorkGroupConfiguration override
     * client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetConfiguration(WorkGroupConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * encrypting query results, whether the Amazon CloudWatch Metrics are enabled for
     * the workgroup, the limit for the amount of bytes scanned (cutoff) per query, if
     * it is specified, and whether workgroup's settings (specified with
     * EnforceWorkGroupConfiguration) in the WorkGroupConfiguration override
     * client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline CreateWorkGroupRequest& WithConfiguration(const WorkGroupConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration for the workgroup, which includes the location in Amazon S3
     * where query results are stored, the encryption configuration, if any, used for
     * encrypting query results, whether the Amazon CloudWatch Metrics are enabled for
     * the workgroup, the limit for the amount of bytes scanned (cutoff) per query, if
     * it is specified, and whether workgroup's settings (specified with
     * EnforceWorkGroupConfiguration) in the WorkGroupConfiguration override
     * client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline CreateWorkGroupRequest& WithConfiguration(WorkGroupConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The workgroup description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The workgroup description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The workgroup description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The workgroup description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The workgroup description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The workgroup description.</p>
     */
    inline CreateWorkGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The workgroup description.</p>
     */
    inline CreateWorkGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The workgroup description.</p>
     */
    inline CreateWorkGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>One or more tags, separated by commas, that you want to attach to the
     * workgroup as you create it.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags, separated by commas, that you want to attach to the
     * workgroup as you create it.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags, separated by commas, that you want to attach to the
     * workgroup as you create it.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags, separated by commas, that you want to attach to the
     * workgroup as you create it.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags, separated by commas, that you want to attach to the
     * workgroup as you create it.</p>
     */
    inline CreateWorkGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags, separated by commas, that you want to attach to the
     * workgroup as you create it.</p>
     */
    inline CreateWorkGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags, separated by commas, that you want to attach to the
     * workgroup as you create it.</p>
     */
    inline CreateWorkGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags, separated by commas, that you want to attach to the
     * workgroup as you create it.</p>
     */
    inline CreateWorkGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    WorkGroupConfiguration m_configuration;
    bool m_configurationHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
