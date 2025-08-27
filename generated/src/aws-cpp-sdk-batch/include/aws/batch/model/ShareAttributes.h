/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Specifies the weights for the share identifiers for the fair-share policy.
   * Share identifiers that aren't included have a default weight of
   * <code>1.0</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ShareAttributes">AWS
   * API Reference</a></p>
   */
  class ShareAttributes
  {
  public:
    AWS_BATCH_API ShareAttributes() = default;
    AWS_BATCH_API ShareAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ShareAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A share identifier or share identifier prefix. If the string ends with an
     * asterisk (*), this entry specifies the weight factor to use for share
     * identifiers that start with that prefix. The list of share identifiers in a
     * fair-share policy can't overlap. For example, you can't have one that specifies
     * a <code>shareIdentifier</code> of <code>UserA*</code> and another that specifies
     * a <code>shareIdentifier</code> of <code>UserA1</code>.</p> <p>There can be no
     * more than 500 share identifiers active in a job queue.</p> <p>The string is
     * limited to 255 alphanumeric characters, and can be followed by an asterisk
     * (*).</p>
     */
    inline const Aws::String& GetShareIdentifier() const { return m_shareIdentifier; }
    inline bool ShareIdentifierHasBeenSet() const { return m_shareIdentifierHasBeenSet; }
    template<typename ShareIdentifierT = Aws::String>
    void SetShareIdentifier(ShareIdentifierT&& value) { m_shareIdentifierHasBeenSet = true; m_shareIdentifier = std::forward<ShareIdentifierT>(value); }
    template<typename ShareIdentifierT = Aws::String>
    ShareAttributes& WithShareIdentifier(ShareIdentifierT&& value) { SetShareIdentifier(std::forward<ShareIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weight factor for the share identifier. The default value is 1.0. A lower
     * value has a higher priority for compute resources. For example, jobs that use a
     * share identifier with a weight factor of 0.125 (1/8) get 8 times the compute
     * resources of jobs that use a share identifier with a weight factor of 1.</p>
     * <p>The smallest supported value is 0.0001, and the largest supported value is
     * 999.9999.</p>
     */
    inline double GetWeightFactor() const { return m_weightFactor; }
    inline bool WeightFactorHasBeenSet() const { return m_weightFactorHasBeenSet; }
    inline void SetWeightFactor(double value) { m_weightFactorHasBeenSet = true; m_weightFactor = value; }
    inline ShareAttributes& WithWeightFactor(double value) { SetWeightFactor(value); return *this;}
    ///@}
  private:

    Aws::String m_shareIdentifier;
    bool m_shareIdentifierHasBeenSet = false;

    double m_weightFactor{0.0};
    bool m_weightFactorHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
