﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/MetadataFormReference.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The enforcement details of a metadata form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MetadataFormEnforcementDetail">AWS
   * API Reference</a></p>
   */
  class MetadataFormEnforcementDetail
  {
  public:
    AWS_DATAZONE_API MetadataFormEnforcementDetail();
    AWS_DATAZONE_API MetadataFormEnforcementDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API MetadataFormEnforcementDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The required metadata forms.</p>
     */
    inline const Aws::Vector<MetadataFormReference>& GetRequiredMetadataForms() const{ return m_requiredMetadataForms; }
    inline bool RequiredMetadataFormsHasBeenSet() const { return m_requiredMetadataFormsHasBeenSet; }
    inline void SetRequiredMetadataForms(const Aws::Vector<MetadataFormReference>& value) { m_requiredMetadataFormsHasBeenSet = true; m_requiredMetadataForms = value; }
    inline void SetRequiredMetadataForms(Aws::Vector<MetadataFormReference>&& value) { m_requiredMetadataFormsHasBeenSet = true; m_requiredMetadataForms = std::move(value); }
    inline MetadataFormEnforcementDetail& WithRequiredMetadataForms(const Aws::Vector<MetadataFormReference>& value) { SetRequiredMetadataForms(value); return *this;}
    inline MetadataFormEnforcementDetail& WithRequiredMetadataForms(Aws::Vector<MetadataFormReference>&& value) { SetRequiredMetadataForms(std::move(value)); return *this;}
    inline MetadataFormEnforcementDetail& AddRequiredMetadataForms(const MetadataFormReference& value) { m_requiredMetadataFormsHasBeenSet = true; m_requiredMetadataForms.push_back(value); return *this; }
    inline MetadataFormEnforcementDetail& AddRequiredMetadataForms(MetadataFormReference&& value) { m_requiredMetadataFormsHasBeenSet = true; m_requiredMetadataForms.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MetadataFormReference> m_requiredMetadataForms;
    bool m_requiredMetadataFormsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
