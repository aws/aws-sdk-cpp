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
    AWS_CLEANROOMS_API ProtectedJobDirectAnalysisConfigurationDetails();
    AWS_CLEANROOMS_API ProtectedJobDirectAnalysisConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobDirectAnalysisConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The receiver account IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReceiverAccountIds() const{ return m_receiverAccountIds; }
    inline bool ReceiverAccountIdsHasBeenSet() const { return m_receiverAccountIdsHasBeenSet; }
    inline void SetReceiverAccountIds(const Aws::Vector<Aws::String>& value) { m_receiverAccountIdsHasBeenSet = true; m_receiverAccountIds = value; }
    inline void SetReceiverAccountIds(Aws::Vector<Aws::String>&& value) { m_receiverAccountIdsHasBeenSet = true; m_receiverAccountIds = std::move(value); }
    inline ProtectedJobDirectAnalysisConfigurationDetails& WithReceiverAccountIds(const Aws::Vector<Aws::String>& value) { SetReceiverAccountIds(value); return *this;}
    inline ProtectedJobDirectAnalysisConfigurationDetails& WithReceiverAccountIds(Aws::Vector<Aws::String>&& value) { SetReceiverAccountIds(std::move(value)); return *this;}
    inline ProtectedJobDirectAnalysisConfigurationDetails& AddReceiverAccountIds(const Aws::String& value) { m_receiverAccountIdsHasBeenSet = true; m_receiverAccountIds.push_back(value); return *this; }
    inline ProtectedJobDirectAnalysisConfigurationDetails& AddReceiverAccountIds(Aws::String&& value) { m_receiverAccountIdsHasBeenSet = true; m_receiverAccountIds.push_back(std::move(value)); return *this; }
    inline ProtectedJobDirectAnalysisConfigurationDetails& AddReceiverAccountIds(const char* value) { m_receiverAccountIdsHasBeenSet = true; m_receiverAccountIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_receiverAccountIds;
    bool m_receiverAccountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
