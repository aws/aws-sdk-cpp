/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/EC2ResourceDetails.h>
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
   * <p>Details on the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API ResourceDetails
  {
  public:
    ResourceDetails();
    ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details on the Amazon EC2 resource.</p>
     */
    inline const EC2ResourceDetails& GetEC2ResourceDetails() const{ return m_eC2ResourceDetails; }

    /**
     * <p>Details on the Amazon EC2 resource.</p>
     */
    inline bool EC2ResourceDetailsHasBeenSet() const { return m_eC2ResourceDetailsHasBeenSet; }

    /**
     * <p>Details on the Amazon EC2 resource.</p>
     */
    inline void SetEC2ResourceDetails(const EC2ResourceDetails& value) { m_eC2ResourceDetailsHasBeenSet = true; m_eC2ResourceDetails = value; }

    /**
     * <p>Details on the Amazon EC2 resource.</p>
     */
    inline void SetEC2ResourceDetails(EC2ResourceDetails&& value) { m_eC2ResourceDetailsHasBeenSet = true; m_eC2ResourceDetails = std::move(value); }

    /**
     * <p>Details on the Amazon EC2 resource.</p>
     */
    inline ResourceDetails& WithEC2ResourceDetails(const EC2ResourceDetails& value) { SetEC2ResourceDetails(value); return *this;}

    /**
     * <p>Details on the Amazon EC2 resource.</p>
     */
    inline ResourceDetails& WithEC2ResourceDetails(EC2ResourceDetails&& value) { SetEC2ResourceDetails(std::move(value)); return *this;}

  private:

    EC2ResourceDetails m_eC2ResourceDetails;
    bool m_eC2ResourceDetailsHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
