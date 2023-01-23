/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostAllocationTagType.h>
#include <aws/ce/model/CostAllocationTagStatus.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The cost allocation tag structure. This includes detailed metadata for the
   * <code>CostAllocationTag</code> object. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostAllocationTag">AWS
   * API Reference</a></p>
   */
  class CostAllocationTag
  {
  public:
    AWS_COSTEXPLORER_API CostAllocationTag();
    AWS_COSTEXPLORER_API CostAllocationTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostAllocationTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the cost allocation tag. </p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The key for the cost allocation tag. </p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>The key for the cost allocation tag. </p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The key for the cost allocation tag. </p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>The key for the cost allocation tag. </p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The key for the cost allocation tag. </p>
     */
    inline CostAllocationTag& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The key for the cost allocation tag. </p>
     */
    inline CostAllocationTag& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The key for the cost allocation tag. </p>
     */
    inline CostAllocationTag& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    /**
     * <p>The type of cost allocation tag. You can use <code>AWSGenerated</code> or
     * <code>UserDefined</code> type tags. <code>AWSGenerated</code> type tags are tags
     * that Amazon Web Services defines and applies to support Amazon Web Services
     * resources for cost allocation purposes. <code>UserDefined</code> type tags are
     * tags that you define, create, and apply to resources. </p>
     */
    inline const CostAllocationTagType& GetType() const{ return m_type; }

    /**
     * <p>The type of cost allocation tag. You can use <code>AWSGenerated</code> or
     * <code>UserDefined</code> type tags. <code>AWSGenerated</code> type tags are tags
     * that Amazon Web Services defines and applies to support Amazon Web Services
     * resources for cost allocation purposes. <code>UserDefined</code> type tags are
     * tags that you define, create, and apply to resources. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of cost allocation tag. You can use <code>AWSGenerated</code> or
     * <code>UserDefined</code> type tags. <code>AWSGenerated</code> type tags are tags
     * that Amazon Web Services defines and applies to support Amazon Web Services
     * resources for cost allocation purposes. <code>UserDefined</code> type tags are
     * tags that you define, create, and apply to resources. </p>
     */
    inline void SetType(const CostAllocationTagType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of cost allocation tag. You can use <code>AWSGenerated</code> or
     * <code>UserDefined</code> type tags. <code>AWSGenerated</code> type tags are tags
     * that Amazon Web Services defines and applies to support Amazon Web Services
     * resources for cost allocation purposes. <code>UserDefined</code> type tags are
     * tags that you define, create, and apply to resources. </p>
     */
    inline void SetType(CostAllocationTagType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of cost allocation tag. You can use <code>AWSGenerated</code> or
     * <code>UserDefined</code> type tags. <code>AWSGenerated</code> type tags are tags
     * that Amazon Web Services defines and applies to support Amazon Web Services
     * resources for cost allocation purposes. <code>UserDefined</code> type tags are
     * tags that you define, create, and apply to resources. </p>
     */
    inline CostAllocationTag& WithType(const CostAllocationTagType& value) { SetType(value); return *this;}

    /**
     * <p>The type of cost allocation tag. You can use <code>AWSGenerated</code> or
     * <code>UserDefined</code> type tags. <code>AWSGenerated</code> type tags are tags
     * that Amazon Web Services defines and applies to support Amazon Web Services
     * resources for cost allocation purposes. <code>UserDefined</code> type tags are
     * tags that you define, create, and apply to resources. </p>
     */
    inline CostAllocationTag& WithType(CostAllocationTagType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The status of a cost allocation tag. </p>
     */
    inline const CostAllocationTagStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a cost allocation tag. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a cost allocation tag. </p>
     */
    inline void SetStatus(const CostAllocationTagStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a cost allocation tag. </p>
     */
    inline void SetStatus(CostAllocationTagStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a cost allocation tag. </p>
     */
    inline CostAllocationTag& WithStatus(const CostAllocationTagStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a cost allocation tag. </p>
     */
    inline CostAllocationTag& WithStatus(CostAllocationTagStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    CostAllocationTagType m_type;
    bool m_typeHasBeenSet = false;

    CostAllocationTagStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
