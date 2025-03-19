/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/DataIdentifierType.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a custom data identifier or managed data identifier that detected a
   * type of sensitive data to exclude from an S3 bucket's sensitivity
   * score.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SuppressDataIdentifier">AWS
   * API Reference</a></p>
   */
  class SuppressDataIdentifier
  {
  public:
    AWS_MACIE2_API SuppressDataIdentifier() = default;
    AWS_MACIE2_API SuppressDataIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SuppressDataIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the custom data identifier or managed data
     * identifier that detected the type of sensitive data to exclude from the
     * score.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SuppressDataIdentifier& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data identifier that detected the sensitive data. Possible values
     * are: CUSTOM, for a custom data identifier; and, MANAGED, for a managed data
     * identifier.</p>
     */
    inline DataIdentifierType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataIdentifierType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SuppressDataIdentifier& WithType(DataIdentifierType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DataIdentifierType m_type{DataIdentifierType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
