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
   * <p>Provides information about a type of sensitive data that Amazon Macie found
   * in an S3 bucket while performing automated sensitive data discovery for an
   * account. The information also specifies the custom or managed data identifier
   * that detected the data. This information is available only if automated
   * sensitive data discovery has been enabled for the account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Detection">AWS
   * API Reference</a></p>
   */
  class Detection
  {
  public:
    AWS_MACIE2_API Detection() = default;
    AWS_MACIE2_API Detection(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Detection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the sensitive data was detected by a custom data identifier, the Amazon
     * Resource Name (ARN) of the custom data identifier that detected the data.
     * Otherwise, this value is null.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Detection& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of occurrences of the sensitive data.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline Detection& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the custom data identifier or managed data
     * identifier that detected the sensitive data. For additional details about a
     * specified managed data identifier, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/managed-data-identifiers.html">Using
     * managed data identifiers</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Detection& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom data identifier or managed data identifier that
     * detected the sensitive data. For a managed data identifier, this value is the
     * same as the unique identifier (id).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Detection& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether occurrences of this type of sensitive data are excluded
     * (true) or included (false) in the bucket's sensitivity score, if the score is
     * calculated by Amazon Macie.</p>
     */
    inline bool GetSuppressed() const { return m_suppressed; }
    inline bool SuppressedHasBeenSet() const { return m_suppressedHasBeenSet; }
    inline void SetSuppressed(bool value) { m_suppressedHasBeenSet = true; m_suppressed = value; }
    inline Detection& WithSuppressed(bool value) { SetSuppressed(value); return *this;}
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
    inline Detection& WithType(DataIdentifierType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_count{0};
    bool m_countHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_suppressed{false};
    bool m_suppressedHasBeenSet = false;

    DataIdentifierType m_type{DataIdentifierType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
