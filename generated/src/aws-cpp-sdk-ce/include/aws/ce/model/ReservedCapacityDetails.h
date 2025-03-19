/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/DynamoDBCapacityDetails.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Details about the reservations that Amazon Web Services recommends that you
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservedCapacityDetails">AWS
   * API Reference</a></p>
   */
  class ReservedCapacityDetails
  {
  public:
    AWS_COSTEXPLORER_API ReservedCapacityDetails() = default;
    AWS_COSTEXPLORER_API ReservedCapacityDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservedCapacityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DynamoDB reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const DynamoDBCapacityDetails& GetDynamoDBCapacityDetails() const { return m_dynamoDBCapacityDetails; }
    inline bool DynamoDBCapacityDetailsHasBeenSet() const { return m_dynamoDBCapacityDetailsHasBeenSet; }
    template<typename DynamoDBCapacityDetailsT = DynamoDBCapacityDetails>
    void SetDynamoDBCapacityDetails(DynamoDBCapacityDetailsT&& value) { m_dynamoDBCapacityDetailsHasBeenSet = true; m_dynamoDBCapacityDetails = std::forward<DynamoDBCapacityDetailsT>(value); }
    template<typename DynamoDBCapacityDetailsT = DynamoDBCapacityDetails>
    ReservedCapacityDetails& WithDynamoDBCapacityDetails(DynamoDBCapacityDetailsT&& value) { SetDynamoDBCapacityDetails(std::forward<DynamoDBCapacityDetailsT>(value)); return *this;}
    ///@}
  private:

    DynamoDBCapacityDetails m_dynamoDBCapacityDetails;
    bool m_dynamoDBCapacityDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
