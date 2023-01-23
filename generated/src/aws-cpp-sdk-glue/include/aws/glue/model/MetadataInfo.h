/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/OtherMetadataValueListItem.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure containing metadata information for a schema
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MetadataInfo">AWS
   * API Reference</a></p>
   */
  class MetadataInfo
  {
  public:
    AWS_GLUE_API MetadataInfo();
    AWS_GLUE_API MetadataInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MetadataInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metadata key’s corresponding value.</p>
     */
    inline const Aws::String& GetMetadataValue() const{ return m_metadataValue; }

    /**
     * <p>The metadata key’s corresponding value.</p>
     */
    inline bool MetadataValueHasBeenSet() const { return m_metadataValueHasBeenSet; }

    /**
     * <p>The metadata key’s corresponding value.</p>
     */
    inline void SetMetadataValue(const Aws::String& value) { m_metadataValueHasBeenSet = true; m_metadataValue = value; }

    /**
     * <p>The metadata key’s corresponding value.</p>
     */
    inline void SetMetadataValue(Aws::String&& value) { m_metadataValueHasBeenSet = true; m_metadataValue = std::move(value); }

    /**
     * <p>The metadata key’s corresponding value.</p>
     */
    inline void SetMetadataValue(const char* value) { m_metadataValueHasBeenSet = true; m_metadataValue.assign(value); }

    /**
     * <p>The metadata key’s corresponding value.</p>
     */
    inline MetadataInfo& WithMetadataValue(const Aws::String& value) { SetMetadataValue(value); return *this;}

    /**
     * <p>The metadata key’s corresponding value.</p>
     */
    inline MetadataInfo& WithMetadataValue(Aws::String&& value) { SetMetadataValue(std::move(value)); return *this;}

    /**
     * <p>The metadata key’s corresponding value.</p>
     */
    inline MetadataInfo& WithMetadataValue(const char* value) { SetMetadataValue(value); return *this;}


    /**
     * <p>The time at which the entry was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time at which the entry was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time at which the entry was created.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time at which the entry was created.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time at which the entry was created.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p>The time at which the entry was created.</p>
     */
    inline MetadataInfo& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time at which the entry was created.</p>
     */
    inline MetadataInfo& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>The time at which the entry was created.</p>
     */
    inline MetadataInfo& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p>Other metadata belonging to the same metadata key.</p>
     */
    inline const Aws::Vector<OtherMetadataValueListItem>& GetOtherMetadataValueList() const{ return m_otherMetadataValueList; }

    /**
     * <p>Other metadata belonging to the same metadata key.</p>
     */
    inline bool OtherMetadataValueListHasBeenSet() const { return m_otherMetadataValueListHasBeenSet; }

    /**
     * <p>Other metadata belonging to the same metadata key.</p>
     */
    inline void SetOtherMetadataValueList(const Aws::Vector<OtherMetadataValueListItem>& value) { m_otherMetadataValueListHasBeenSet = true; m_otherMetadataValueList = value; }

    /**
     * <p>Other metadata belonging to the same metadata key.</p>
     */
    inline void SetOtherMetadataValueList(Aws::Vector<OtherMetadataValueListItem>&& value) { m_otherMetadataValueListHasBeenSet = true; m_otherMetadataValueList = std::move(value); }

    /**
     * <p>Other metadata belonging to the same metadata key.</p>
     */
    inline MetadataInfo& WithOtherMetadataValueList(const Aws::Vector<OtherMetadataValueListItem>& value) { SetOtherMetadataValueList(value); return *this;}

    /**
     * <p>Other metadata belonging to the same metadata key.</p>
     */
    inline MetadataInfo& WithOtherMetadataValueList(Aws::Vector<OtherMetadataValueListItem>&& value) { SetOtherMetadataValueList(std::move(value)); return *this;}

    /**
     * <p>Other metadata belonging to the same metadata key.</p>
     */
    inline MetadataInfo& AddOtherMetadataValueList(const OtherMetadataValueListItem& value) { m_otherMetadataValueListHasBeenSet = true; m_otherMetadataValueList.push_back(value); return *this; }

    /**
     * <p>Other metadata belonging to the same metadata key.</p>
     */
    inline MetadataInfo& AddOtherMetadataValueList(OtherMetadataValueListItem&& value) { m_otherMetadataValueListHasBeenSet = true; m_otherMetadataValueList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_metadataValue;
    bool m_metadataValueHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Vector<OtherMetadataValueListItem> m_otherMetadataValueList;
    bool m_otherMetadataValueListHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
