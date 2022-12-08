/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/RelationshipType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>List of child blocks for the current block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/RelationshipsListItem">AWS
   * API Reference</a></p>
   */
  class RelationshipsListItem
  {
  public:
    AWS_COMPREHEND_API RelationshipsListItem();
    AWS_COMPREHEND_API RelationshipsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API RelationshipsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifers of the child blocks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>Identifers of the child blocks.</p>
     */
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }

    /**
     * <p>Identifers of the child blocks.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>Identifers of the child blocks.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }

    /**
     * <p>Identifers of the child blocks.</p>
     */
    inline RelationshipsListItem& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>Identifers of the child blocks.</p>
     */
    inline RelationshipsListItem& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>Identifers of the child blocks.</p>
     */
    inline RelationshipsListItem& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>Identifers of the child blocks.</p>
     */
    inline RelationshipsListItem& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>Identifers of the child blocks.</p>
     */
    inline RelationshipsListItem& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }


    /**
     * <p>Only supported relationship is a child relationship.</p>
     */
    inline const RelationshipType& GetType() const{ return m_type; }

    /**
     * <p>Only supported relationship is a child relationship.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Only supported relationship is a child relationship.</p>
     */
    inline void SetType(const RelationshipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Only supported relationship is a child relationship.</p>
     */
    inline void SetType(RelationshipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Only supported relationship is a child relationship.</p>
     */
    inline RelationshipsListItem& WithType(const RelationshipType& value) { SetType(value); return *this;}

    /**
     * <p>Only supported relationship is a child relationship.</p>
     */
    inline RelationshipsListItem& WithType(RelationshipType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;

    RelationshipType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
