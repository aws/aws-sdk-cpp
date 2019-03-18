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
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/RelationshipType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Information about how blocks are related to each other. A <code>Block</code>
   * object contains 0 or more <code>Relation</code> objects in a list,
   * <code>Relationships</code>. For more information, see <a>Block</a>.</p> <p>The
   * <code>Type</code> element provides the type of the relationship for all blocks
   * in the <code>IDs</code> array. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/Relationship">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API Relationship
  {
  public:
    Relationship();
    Relationship(Aws::Utils::Json::JsonView jsonValue);
    Relationship& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or
     * <code>CHILD</code>.</p>
     */
    inline const RelationshipType& GetType() const{ return m_type; }

    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or
     * <code>CHILD</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or
     * <code>CHILD</code>.</p>
     */
    inline void SetType(const RelationshipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or
     * <code>CHILD</code>.</p>
     */
    inline void SetType(RelationshipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or
     * <code>CHILD</code>.</p>
     */
    inline Relationship& WithType(const RelationshipType& value) { SetType(value); return *this;}

    /**
     * <p>The type of relationship that the blocks in the IDs array have with the
     * current block. The relationship can be <code>VALUE</code> or
     * <code>CHILD</code>.</p>
     */
    inline Relationship& WithType(RelationshipType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline Relationship& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline Relationship& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline Relationship& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline Relationship& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of IDs for related blocks. You can get the type of the relationship
     * from the <code>Type</code> element.</p>
     */
    inline Relationship& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

  private:

    RelationshipType m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
