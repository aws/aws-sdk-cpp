/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/FailedItemReason.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Details of a resource that failed when trying to update it's association to a
   * resource set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/FailedItem">AWS API
   * Reference</a></p>
   */
  class FailedItem
  {
  public:
    AWS_FMS_API FailedItem() = default;
    AWS_FMS_API FailedItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API FailedItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The univeral resource indicator (URI) of the resource that failed.</p>
     */
    inline const Aws::String& GetURI() const { return m_uRI; }
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }
    template<typename URIT = Aws::String>
    void SetURI(URIT&& value) { m_uRIHasBeenSet = true; m_uRI = std::forward<URIT>(value); }
    template<typename URIT = Aws::String>
    FailedItem& WithURI(URIT&& value) { SetURI(std::forward<URIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the resource's association could not be updated.</p>
     */
    inline FailedItemReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(FailedItemReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline FailedItem& WithReason(FailedItemReason value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_uRI;
    bool m_uRIHasBeenSet = false;

    FailedItemReason m_reason{FailedItemReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
