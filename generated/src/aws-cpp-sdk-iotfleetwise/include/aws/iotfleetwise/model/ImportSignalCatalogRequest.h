/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/FormattedVss.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotfleetwise/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class ImportSignalCatalogRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API ImportSignalCatalogRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportSignalCatalog"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the signal catalog to import.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the signal catalog to import.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the signal catalog to import.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the signal catalog to import.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the signal catalog to import.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the signal catalog to import.</p>
     */
    inline ImportSignalCatalogRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the signal catalog to import.</p>
     */
    inline ImportSignalCatalogRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the signal catalog to import.</p>
     */
    inline ImportSignalCatalogRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline ImportSignalCatalogRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline ImportSignalCatalogRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A brief description of the signal catalog. </p>
     */
    inline ImportSignalCatalogRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The contents of the Vehicle Signal Specification (VSS) configuration. VSS is
     * a precise language used to describe and model signals in vehicle networks.</p>
     */
    inline const FormattedVss& GetVss() const{ return m_vss; }

    /**
     * <p>The contents of the Vehicle Signal Specification (VSS) configuration. VSS is
     * a precise language used to describe and model signals in vehicle networks.</p>
     */
    inline bool VssHasBeenSet() const { return m_vssHasBeenSet; }

    /**
     * <p>The contents of the Vehicle Signal Specification (VSS) configuration. VSS is
     * a precise language used to describe and model signals in vehicle networks.</p>
     */
    inline void SetVss(const FormattedVss& value) { m_vssHasBeenSet = true; m_vss = value; }

    /**
     * <p>The contents of the Vehicle Signal Specification (VSS) configuration. VSS is
     * a precise language used to describe and model signals in vehicle networks.</p>
     */
    inline void SetVss(FormattedVss&& value) { m_vssHasBeenSet = true; m_vss = std::move(value); }

    /**
     * <p>The contents of the Vehicle Signal Specification (VSS) configuration. VSS is
     * a precise language used to describe and model signals in vehicle networks.</p>
     */
    inline ImportSignalCatalogRequest& WithVss(const FormattedVss& value) { SetVss(value); return *this;}

    /**
     * <p>The contents of the Vehicle Signal Specification (VSS) configuration. VSS is
     * a precise language used to describe and model signals in vehicle networks.</p>
     */
    inline ImportSignalCatalogRequest& WithVss(FormattedVss&& value) { SetVss(std::move(value)); return *this;}


    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline ImportSignalCatalogRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline ImportSignalCatalogRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline ImportSignalCatalogRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata that can be used to manage the signal catalog.</p>
     */
    inline ImportSignalCatalogRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FormattedVss m_vss;
    bool m_vssHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
