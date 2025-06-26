/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/CdcStatus.h>
#include <aws/keyspaces/model/ViewType.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The settings of the CDC stream of the table. For more information about CDC
   * streams, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cdc.html">Working
   * with change data capture (CDC) streams in Amazon Keyspaces</a> in the <i>Amazon
   * Keyspaces Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/CdcSpecificationSummary">AWS
   * API Reference</a></p>
   */
  class CdcSpecificationSummary
  {
  public:
    AWS_KEYSPACES_API CdcSpecificationSummary() = default;
    AWS_KEYSPACES_API CdcSpecificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API CdcSpecificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the CDC stream. Specifies if the table has a CDC stream.</p>
     */
    inline CdcStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CdcStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CdcSpecificationSummary& WithStatus(CdcStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The view type specifies the changes Amazon Keyspaces records for each changed
     * row in the stream. This setting can't be changed, after the stream has been
     * created. </p> <p>The options are:</p> <ul> <li> <p>
     * <code>NEW_AND_OLD_IMAGES</code> - both versions of the row, before and after the
     * change. This is the default.</p> </li> <li> <p> <code>NEW_IMAGE</code> - the
     * version of the row after the change.</p> </li> <li> <p> <code>OLD_IMAGE</code> -
     * the version of the row before the change.</p> </li> <li> <p>
     * <code>KEYS_ONLY</code> - the partition and clustering keys of the row that was
     * changed.</p> </li> </ul>
     */
    inline ViewType GetViewType() const { return m_viewType; }
    inline bool ViewTypeHasBeenSet() const { return m_viewTypeHasBeenSet; }
    inline void SetViewType(ViewType value) { m_viewTypeHasBeenSet = true; m_viewType = value; }
    inline CdcSpecificationSummary& WithViewType(ViewType value) { SetViewType(value); return *this;}
    ///@}
  private:

    CdcStatus m_status{CdcStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ViewType m_viewType{ViewType::NOT_SET};
    bool m_viewTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
