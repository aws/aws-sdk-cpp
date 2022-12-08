/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ListApplicationsRequest">AWS
   * API Reference</a></p>
   */
  class ListApplicationsRequest : public KinesisAnalyticsRequest
  {
  public:
    AWS_KINESISANALYTICS_API ListApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplications"; }

    AWS_KINESISANALYTICS_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Maximum number of applications to list.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of applications to list.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Maximum number of applications to list.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of applications to list.</p>
     */
    inline ListApplicationsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Name of the application to start the list with. When using pagination to
     * retrieve the list, you don't need to specify this parameter in the first
     * request. However, in subsequent requests, you add the last application name from
     * the previous response to get the next page of applications.</p>
     */
    inline const Aws::String& GetExclusiveStartApplicationName() const{ return m_exclusiveStartApplicationName; }

    /**
     * <p>Name of the application to start the list with. When using pagination to
     * retrieve the list, you don't need to specify this parameter in the first
     * request. However, in subsequent requests, you add the last application name from
     * the previous response to get the next page of applications.</p>
     */
    inline bool ExclusiveStartApplicationNameHasBeenSet() const { return m_exclusiveStartApplicationNameHasBeenSet; }

    /**
     * <p>Name of the application to start the list with. When using pagination to
     * retrieve the list, you don't need to specify this parameter in the first
     * request. However, in subsequent requests, you add the last application name from
     * the previous response to get the next page of applications.</p>
     */
    inline void SetExclusiveStartApplicationName(const Aws::String& value) { m_exclusiveStartApplicationNameHasBeenSet = true; m_exclusiveStartApplicationName = value; }

    /**
     * <p>Name of the application to start the list with. When using pagination to
     * retrieve the list, you don't need to specify this parameter in the first
     * request. However, in subsequent requests, you add the last application name from
     * the previous response to get the next page of applications.</p>
     */
    inline void SetExclusiveStartApplicationName(Aws::String&& value) { m_exclusiveStartApplicationNameHasBeenSet = true; m_exclusiveStartApplicationName = std::move(value); }

    /**
     * <p>Name of the application to start the list with. When using pagination to
     * retrieve the list, you don't need to specify this parameter in the first
     * request. However, in subsequent requests, you add the last application name from
     * the previous response to get the next page of applications.</p>
     */
    inline void SetExclusiveStartApplicationName(const char* value) { m_exclusiveStartApplicationNameHasBeenSet = true; m_exclusiveStartApplicationName.assign(value); }

    /**
     * <p>Name of the application to start the list with. When using pagination to
     * retrieve the list, you don't need to specify this parameter in the first
     * request. However, in subsequent requests, you add the last application name from
     * the previous response to get the next page of applications.</p>
     */
    inline ListApplicationsRequest& WithExclusiveStartApplicationName(const Aws::String& value) { SetExclusiveStartApplicationName(value); return *this;}

    /**
     * <p>Name of the application to start the list with. When using pagination to
     * retrieve the list, you don't need to specify this parameter in the first
     * request. However, in subsequent requests, you add the last application name from
     * the previous response to get the next page of applications.</p>
     */
    inline ListApplicationsRequest& WithExclusiveStartApplicationName(Aws::String&& value) { SetExclusiveStartApplicationName(std::move(value)); return *this;}

    /**
     * <p>Name of the application to start the list with. When using pagination to
     * retrieve the list, you don't need to specify this parameter in the first
     * request. However, in subsequent requests, you add the last application name from
     * the previous response to get the next page of applications.</p>
     */
    inline ListApplicationsRequest& WithExclusiveStartApplicationName(const char* value) { SetExclusiveStartApplicationName(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_exclusiveStartApplicationName;
    bool m_exclusiveStartApplicationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
