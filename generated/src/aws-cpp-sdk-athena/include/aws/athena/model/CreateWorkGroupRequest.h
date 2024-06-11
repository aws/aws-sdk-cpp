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


    ///@{
    /**
     * <p>The workgroup name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateWorkGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWorkGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWorkGroupRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration information for creating an Athena SQL workgroup or
     * Spark enabled Athena workgroup. Athena SQL workgroup configuration includes the
     * location in Amazon S3 where query and calculation results are stored, the
     * encryption configuration, if any, used for encrypting query results, whether the
     * Amazon CloudWatch Metrics are enabled for the workgroup, the limit for the
     * amount of bytes scanned (cutoff) per query, if it is specified, and whether
     * workgroup's settings (specified with <code>EnforceWorkGroupConfiguration</code>)
     * in the <code>WorkGroupConfiguration</code> override client-side settings. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline const WorkGroupConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const WorkGroupConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(WorkGroupConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateWorkGroupRequest& WithConfiguration(const WorkGroupConfiguration& value) { SetConfiguration(value); return *this;}
    inline CreateWorkGroupRequest& WithConfiguration(WorkGroupConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateWorkGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateWorkGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateWorkGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of comma separated tags to add to the workgroup that is created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWorkGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateWorkGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWorkGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateWorkGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
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
