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
    AWS_COSTEXPLORER_API ReservedCapacityDetails();
    AWS_COSTEXPLORER_API ReservedCapacityDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservedCapacityDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DynamoDB reservations that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const DynamoDBCapacityDetails& GetDynamoDBCapacityDetails() const{ return m_dynamoDBCapacityDetails; }
    inline bool DynamoDBCapacityDetailsHasBeenSet() const { return m_dynamoDBCapacityDetailsHasBeenSet; }
    inline void SetDynamoDBCapacityDetails(const DynamoDBCapacityDetails& value) { m_dynamoDBCapacityDetailsHasBeenSet = true; m_dynamoDBCapacityDetails = value; }
    inline void SetDynamoDBCapacityDetails(DynamoDBCapacityDetails&& value) { m_dynamoDBCapacityDetailsHasBeenSet = true; m_dynamoDBCapacityDetails = std::move(value); }
    inline ReservedCapacityDetails& WithDynamoDBCapacityDetails(const DynamoDBCapacityDetails& value) { SetDynamoDBCapacityDetails(value); return *this;}
    inline ReservedCapacityDetails& WithDynamoDBCapacityDetails(DynamoDBCapacityDetails&& value) { SetDynamoDBCapacityDetails(std::move(value)); return *this;}
    ///@}
  private:

    DynamoDBCapacityDetails m_dynamoDBCapacityDetails;
    bool m_dynamoDBCapacityDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
