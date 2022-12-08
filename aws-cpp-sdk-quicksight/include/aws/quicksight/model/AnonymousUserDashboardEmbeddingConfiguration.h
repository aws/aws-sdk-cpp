/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Information about the dashboard that you want to embed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnonymousUserDashboardEmbeddingConfiguration">AWS
   * API Reference</a></p>
   */
  class AnonymousUserDashboardEmbeddingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfiguration();
    AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this dashboard.</p> <p>The Amazon Resource Name (ARN) of this
     * dashboard must be included in the <code>AuthorizedResourceArns</code> parameter.
     * Otherwise, the request will fail with
     * <code>InvalidParameterValueException</code>.</p>
     */
    inline const Aws::String& GetInitialDashboardId() const{ return m_initialDashboardId; }

    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this dashboard.</p> <p>The Amazon Resource Name (ARN) of this
     * dashboard must be included in the <code>AuthorizedResourceArns</code> parameter.
     * Otherwise, the request will fail with
     * <code>InvalidParameterValueException</code>.</p>
     */
    inline bool InitialDashboardIdHasBeenSet() const { return m_initialDashboardIdHasBeenSet; }

    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this dashboard.</p> <p>The Amazon Resource Name (ARN) of this
     * dashboard must be included in the <code>AuthorizedResourceArns</code> parameter.
     * Otherwise, the request will fail with
     * <code>InvalidParameterValueException</code>.</p>
     */
    inline void SetInitialDashboardId(const Aws::String& value) { m_initialDashboardIdHasBeenSet = true; m_initialDashboardId = value; }

    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this dashboard.</p> <p>The Amazon Resource Name (ARN) of this
     * dashboard must be included in the <code>AuthorizedResourceArns</code> parameter.
     * Otherwise, the request will fail with
     * <code>InvalidParameterValueException</code>.</p>
     */
    inline void SetInitialDashboardId(Aws::String&& value) { m_initialDashboardIdHasBeenSet = true; m_initialDashboardId = std::move(value); }

    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this dashboard.</p> <p>The Amazon Resource Name (ARN) of this
     * dashboard must be included in the <code>AuthorizedResourceArns</code> parameter.
     * Otherwise, the request will fail with
     * <code>InvalidParameterValueException</code>.</p>
     */
    inline void SetInitialDashboardId(const char* value) { m_initialDashboardIdHasBeenSet = true; m_initialDashboardId.assign(value); }

    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this dashboard.</p> <p>The Amazon Resource Name (ARN) of this
     * dashboard must be included in the <code>AuthorizedResourceArns</code> parameter.
     * Otherwise, the request will fail with
     * <code>InvalidParameterValueException</code>.</p>
     */
    inline AnonymousUserDashboardEmbeddingConfiguration& WithInitialDashboardId(const Aws::String& value) { SetInitialDashboardId(value); return *this;}

    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this dashboard.</p> <p>The Amazon Resource Name (ARN) of this
     * dashboard must be included in the <code>AuthorizedResourceArns</code> parameter.
     * Otherwise, the request will fail with
     * <code>InvalidParameterValueException</code>.</p>
     */
    inline AnonymousUserDashboardEmbeddingConfiguration& WithInitialDashboardId(Aws::String&& value) { SetInitialDashboardId(std::move(value)); return *this;}

    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this dashboard.</p> <p>The Amazon Resource Name (ARN) of this
     * dashboard must be included in the <code>AuthorizedResourceArns</code> parameter.
     * Otherwise, the request will fail with
     * <code>InvalidParameterValueException</code>.</p>
     */
    inline AnonymousUserDashboardEmbeddingConfiguration& WithInitialDashboardId(const char* value) { SetInitialDashboardId(value); return *this;}

  private:

    Aws::String m_initialDashboardId;
    bool m_initialDashboardIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
