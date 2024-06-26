/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * Contains information about the application version changes due to an
   * operation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationVersionChangeDetails">AWS
   * API Reference</a></p>
   */
  class ApplicationVersionChangeDetails
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationVersionChangeDetails();
    AWS_KINESISANALYTICSV2_API ApplicationVersionChangeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationVersionChangeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The operation was performed on this version of the application
     */
    inline long long GetApplicationVersionUpdatedFrom() const{ return m_applicationVersionUpdatedFrom; }
    inline bool ApplicationVersionUpdatedFromHasBeenSet() const { return m_applicationVersionUpdatedFromHasBeenSet; }
    inline void SetApplicationVersionUpdatedFrom(long long value) { m_applicationVersionUpdatedFromHasBeenSet = true; m_applicationVersionUpdatedFrom = value; }
    inline ApplicationVersionChangeDetails& WithApplicationVersionUpdatedFrom(long long value) { SetApplicationVersionUpdatedFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * The operation execution resulted in the transition to the following version of
     * the application
     */
    inline long long GetApplicationVersionUpdatedTo() const{ return m_applicationVersionUpdatedTo; }
    inline bool ApplicationVersionUpdatedToHasBeenSet() const { return m_applicationVersionUpdatedToHasBeenSet; }
    inline void SetApplicationVersionUpdatedTo(long long value) { m_applicationVersionUpdatedToHasBeenSet = true; m_applicationVersionUpdatedTo = value; }
    inline ApplicationVersionChangeDetails& WithApplicationVersionUpdatedTo(long long value) { SetApplicationVersionUpdatedTo(value); return *this;}
    ///@}
  private:

    long long m_applicationVersionUpdatedFrom;
    bool m_applicationVersionUpdatedFromHasBeenSet = false;

    long long m_applicationVersionUpdatedTo;
    bool m_applicationVersionUpdatedToHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
