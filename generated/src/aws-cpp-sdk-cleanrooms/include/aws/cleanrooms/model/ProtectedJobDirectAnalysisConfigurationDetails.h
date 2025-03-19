/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The protected job direct analysis configuration details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobDirectAnalysisConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class ProtectedJobDirectAnalysisConfigurationDetails
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobDirectAnalysisConfigurationDetails() = default;
    AWS_CLEANROOMS_API ProtectedJobDirectAnalysisConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobDirectAnalysisConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The receiver account IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReceiverAccountIds() const { return m_receiverAccountIds; }
    inline bool ReceiverAccountIdsHasBeenSet() const { return m_receiverAccountIdsHasBeenSet; }
    template<typename ReceiverAccountIdsT = Aws::Vector<Aws::String>>
    void SetReceiverAccountIds(ReceiverAccountIdsT&& value) { m_receiverAccountIdsHasBeenSet = true; m_receiverAccountIds = std::forward<ReceiverAccountIdsT>(value); }
    template<typename ReceiverAccountIdsT = Aws::Vector<Aws::String>>
    ProtectedJobDirectAnalysisConfigurationDetails& WithReceiverAccountIds(ReceiverAccountIdsT&& value) { SetReceiverAccountIds(std::forward<ReceiverAccountIdsT>(value)); return *this;}
    template<typename ReceiverAccountIdsT = Aws::String>
    ProtectedJobDirectAnalysisConfigurationDetails& AddReceiverAccountIds(ReceiverAccountIdsT&& value) { m_receiverAccountIdsHasBeenSet = true; m_receiverAccountIds.emplace_back(std::forward<ReceiverAccountIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_receiverAccountIds;
    bool m_receiverAccountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
