/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/ItemType.h>
#include <aws/ssm-incidents/model/ItemValue.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details and type of a related item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ItemIdentifier">AWS
   * API Reference</a></p>
   */
  class ItemIdentifier
  {
  public:
    AWS_SSMINCIDENTS_API ItemIdentifier();
    AWS_SSMINCIDENTS_API ItemIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ItemIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of related item. </p>
     */
    inline const ItemType& GetType() const{ return m_type; }

    /**
     * <p>The type of related item. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of related item. </p>
     */
    inline void SetType(const ItemType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of related item. </p>
     */
    inline void SetType(ItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of related item. </p>
     */
    inline ItemIdentifier& WithType(const ItemType& value) { SetType(value); return *this;}

    /**
     * <p>The type of related item. </p>
     */
    inline ItemIdentifier& WithType(ItemType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Details about the related item.</p>
     */
    inline const ItemValue& GetValue() const{ return m_value; }

    /**
     * <p>Details about the related item.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Details about the related item.</p>
     */
    inline void SetValue(const ItemValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Details about the related item.</p>
     */
    inline void SetValue(ItemValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Details about the related item.</p>
     */
    inline ItemIdentifier& WithValue(const ItemValue& value) { SetValue(value); return *this;}

    /**
     * <p>Details about the related item.</p>
     */
    inline ItemIdentifier& WithValue(ItemValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    ItemType m_type;
    bool m_typeHasBeenSet = false;

    ItemValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
