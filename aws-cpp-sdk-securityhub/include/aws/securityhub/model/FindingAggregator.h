/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A finding aggregator. A finding aggregator contains the configuration for
   * finding aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingAggregator">AWS
   * API Reference</a></p>
   */
  class FindingAggregator
  {
  public:
    AWS_SECURITYHUB_API FindingAggregator();
    AWS_SECURITYHUB_API FindingAggregator(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingAggregator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and delete the finding aggregator.</p>
     */
    inline const Aws::String& GetFindingAggregatorArn() const{ return m_findingAggregatorArn; }

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and delete the finding aggregator.</p>
     */
    inline bool FindingAggregatorArnHasBeenSet() const { return m_findingAggregatorArnHasBeenSet; }

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and delete the finding aggregator.</p>
     */
    inline void SetFindingAggregatorArn(const Aws::String& value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn = value; }

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and delete the finding aggregator.</p>
     */
    inline void SetFindingAggregatorArn(Aws::String&& value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn = std::move(value); }

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and delete the finding aggregator.</p>
     */
    inline void SetFindingAggregatorArn(const char* value) { m_findingAggregatorArnHasBeenSet = true; m_findingAggregatorArn.assign(value); }

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and delete the finding aggregator.</p>
     */
    inline FindingAggregator& WithFindingAggregatorArn(const Aws::String& value) { SetFindingAggregatorArn(value); return *this;}

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and delete the finding aggregator.</p>
     */
    inline FindingAggregator& WithFindingAggregatorArn(Aws::String&& value) { SetFindingAggregatorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the finding aggregator. You use the finding aggregator ARN to
     * retrieve details for, update, and delete the finding aggregator.</p>
     */
    inline FindingAggregator& WithFindingAggregatorArn(const char* value) { SetFindingAggregatorArn(value); return *this;}

  private:

    Aws::String m_findingAggregatorArn;
    bool m_findingAggregatorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
