/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateWorkGroupRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API CreateWorkGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkGroup"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>Contains configuration information for creating an Athena SQL workgroup,
     * which includes the location in Amazon S3 where query results are stored, the
     * encryption configuration, if any, used for encrypting query results, whether the
     * Amazon CloudWatch Metrics are enabled for the workgroup, the limit for the
     * amount of bytes scanned (cutoff) per query, if it is specified, and whether
     * workgroup's settings (specified with <code>EnforceWorkGroupConfiguration</code>)
     * in the <code>WorkGroupConfiguration</code> override client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline const WorkGroupConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Contains configuration information for creating an Athena SQL workgroup,
     * which includes the location in Amazon S3 where query results are stored, the
     * encryption configuration, if any, used for encrypting query results, whether the
     * Amazon CloudWatch Metrics are enabled for the workgroup, the limit for the
     * amount of bytes scanned (cutoff) per query, if it is specified, and whether
     * workgroup's settings (specified with <code>EnforceWorkGroupConfiguration</code>)
     * in the <code>WorkGroupConfiguration</code> override client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Contains configuration information for creating an Athena SQL workgroup,
     * which includes the location in Amazon S3 where query results are stored, the
     * encryption configuration, if any, used for encrypting query results, whether the
     * Amazon CloudWatch Metrics are enabled for the workgroup, the limit for the
     * amount of bytes scanned (cutoff) per query, if it is specified, and whether
     * workgroup's settings (specified with <code>EnforceWorkGroupConfiguration</code>)
     * in the <code>WorkGroupConfiguration</code> override client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetConfiguration(const WorkGroupConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Contains configuration information for creating an Athena SQL workgroup,
     * which includes the location in Amazon S3 where query results are stored, the
     * encryption configuration, if any, used for encrypting query results, whether the
     * Amazon CloudWatch Metrics are enabled for the workgroup, the limit for the
     * amount of bytes scanned (cutoff) per query, if it is specified, and whether
     * workgroup's settings (specified with <code>EnforceWorkGroupConfiguration</code>)
     * in the <code>WorkGroupConfiguration</code> override client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetConfiguration(WorkGroupConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Contains configuration information for creating an Athena SQL workgroup,
     * which includes the location in Amazon S3 where query results are stored, the
     * encryption configuration, if any, used for encrypting query results, whether the
     * Amazon CloudWatch Metrics are enabled for the workgroup, the limit for the
     * amount of bytes scanned (cutoff) per query, if it is specified, and whether
     * workgroup's settings (specified with <code>EnforceWorkGroupConfiguration</code>)
     * in the <code>WorkGroupConfiguration</code> override client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline CreateWorkGroupRequest& WithConfiguration(const WorkGroupConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Contains configuration information for creating an Athena SQL workgroup,
     * which includes the location in Amazon S3 where query results are stored, the
     * encryption configuration, if any, used for encrypting query results, whether the
     * Amazon CloudWatch Metrics are enabled for the workgroup, the limit for the
     * amount of bytes scanned (cutoff) per query, if it is specified, and whether
     * workgroup's settings (specified with <code>EnforceWorkGroupConfiguration</code>)
     * in the <code>WorkGroupConfiguration</code> override client-side settings. See
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
     * <p>A list of comma separated tags to add to the workgroup that is created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of comma separated tags to add to the workgroup that is created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of comma separated tags to add to the workgroup that is created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of comma separated tags to add to the workgroup that is created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of comma separated tags to add to the workgroup that is created.</p>
     */
    inline CreateWorkGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of comma separated tags to add to the workgroup that is created.</p>
     */
    inline CreateWorkGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of comma separated tags to add to the workgroup that is created.</p>
     */
    inline CreateWorkGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of comma separated tags to add to the workgroup that is created.</p>
     */
    inline CreateWorkGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    WorkGroupConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
