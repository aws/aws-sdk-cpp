/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class DescribePersistentAppUIRequest : public EMRRequest
  {
  public:
    AWS_EMR_API DescribePersistentAppUIRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePersistentAppUI"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier for the persistent application user interface.</p>
     */
    inline const Aws::String& GetPersistentAppUIId() const { return m_persistentAppUIId; }
    inline bool PersistentAppUIIdHasBeenSet() const { return m_persistentAppUIIdHasBeenSet; }
    template<typename PersistentAppUIIdT = Aws::String>
    void SetPersistentAppUIId(PersistentAppUIIdT&& value) { m_persistentAppUIIdHasBeenSet = true; m_persistentAppUIId = std::forward<PersistentAppUIIdT>(value); }
    template<typename PersistentAppUIIdT = Aws::String>
    DescribePersistentAppUIRequest& WithPersistentAppUIId(PersistentAppUIIdT&& value) { SetPersistentAppUIId(std::forward<PersistentAppUIIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_persistentAppUIId;
    bool m_persistentAppUIIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
