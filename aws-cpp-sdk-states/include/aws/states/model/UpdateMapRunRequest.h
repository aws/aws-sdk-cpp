/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class UpdateMapRunRequest : public SFNRequest
  {
  public:
    AWS_SFN_API UpdateMapRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMapRun"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run.</p>
     */
    inline const Aws::String& GetMapRunArn() const{ return m_mapRunArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run.</p>
     */
    inline bool MapRunArnHasBeenSet() const { return m_mapRunArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run.</p>
     */
    inline void SetMapRunArn(const Aws::String& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run.</p>
     */
    inline void SetMapRunArn(Aws::String&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run.</p>
     */
    inline void SetMapRunArn(const char* value) { m_mapRunArnHasBeenSet = true; m_mapRunArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run.</p>
     */
    inline UpdateMapRunRequest& WithMapRunArn(const Aws::String& value) { SetMapRunArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run.</p>
     */
    inline UpdateMapRunRequest& WithMapRunArn(Aws::String&& value) { SetMapRunArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run.</p>
     */
    inline UpdateMapRunRequest& WithMapRunArn(const char* value) { SetMapRunArn(value); return *this;}


    /**
     * <p>The maximum number of child workflow executions that can be specified to run
     * in parallel for the Map Run at the same time.</p>
     */
    inline int GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of child workflow executions that can be specified to run
     * in parallel for the Map Run at the same time.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The maximum number of child workflow executions that can be specified to run
     * in parallel for the Map Run at the same time.</p>
     */
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of child workflow executions that can be specified to run
     * in parallel for the Map Run at the same time.</p>
     */
    inline UpdateMapRunRequest& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The maximum percentage of failed items before the Map Run fails.</p>
     */
    inline double GetToleratedFailurePercentage() const{ return m_toleratedFailurePercentage; }

    /**
     * <p>The maximum percentage of failed items before the Map Run fails.</p>
     */
    inline bool ToleratedFailurePercentageHasBeenSet() const { return m_toleratedFailurePercentageHasBeenSet; }

    /**
     * <p>The maximum percentage of failed items before the Map Run fails.</p>
     */
    inline void SetToleratedFailurePercentage(double value) { m_toleratedFailurePercentageHasBeenSet = true; m_toleratedFailurePercentage = value; }

    /**
     * <p>The maximum percentage of failed items before the Map Run fails.</p>
     */
    inline UpdateMapRunRequest& WithToleratedFailurePercentage(double value) { SetToleratedFailurePercentage(value); return *this;}


    /**
     * <p>The maximum number of failed items before the Map Run fails.</p>
     */
    inline long long GetToleratedFailureCount() const{ return m_toleratedFailureCount; }

    /**
     * <p>The maximum number of failed items before the Map Run fails.</p>
     */
    inline bool ToleratedFailureCountHasBeenSet() const { return m_toleratedFailureCountHasBeenSet; }

    /**
     * <p>The maximum number of failed items before the Map Run fails.</p>
     */
    inline void SetToleratedFailureCount(long long value) { m_toleratedFailureCountHasBeenSet = true; m_toleratedFailureCount = value; }

    /**
     * <p>The maximum number of failed items before the Map Run fails.</p>
     */
    inline UpdateMapRunRequest& WithToleratedFailureCount(long long value) { SetToleratedFailureCount(value); return *this;}

  private:

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;

    int m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    double m_toleratedFailurePercentage;
    bool m_toleratedFailurePercentageHasBeenSet = false;

    long long m_toleratedFailureCount;
    bool m_toleratedFailureCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
