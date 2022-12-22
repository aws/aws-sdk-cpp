/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardVisualId.h>
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
   * <p>The experience that you are embedding. You can use this object to generate a
   * url that embeds a visual into your application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserDashboardVisualEmbeddingConfiguration">AWS
   * API Reference</a></p>
   */
  class RegisteredUserDashboardVisualEmbeddingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RegisteredUserDashboardVisualEmbeddingConfiguration();
    AWS_QUICKSIGHT_API RegisteredUserDashboardVisualEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredUserDashboardVisualEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The visual ID for the visual that you want the user to embed. This ID is
     * included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this visual.</p> <p>The Amazon Resource Name (ARN) of the
     * dashboard that the visual belongs to must be included in the
     * <code>AuthorizedResourceArns</code> parameter. Otherwise, the request will fail
     * with <code>InvalidParameterValueException</code>.</p>
     */
    inline const DashboardVisualId& GetInitialDashboardVisualId() const{ return m_initialDashboardVisualId; }

    /**
     * <p>The visual ID for the visual that you want the user to embed. This ID is
     * included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this visual.</p> <p>The Amazon Resource Name (ARN) of the
     * dashboard that the visual belongs to must be included in the
     * <code>AuthorizedResourceArns</code> parameter. Otherwise, the request will fail
     * with <code>InvalidParameterValueException</code>.</p>
     */
    inline bool InitialDashboardVisualIdHasBeenSet() const { return m_initialDashboardVisualIdHasBeenSet; }

    /**
     * <p>The visual ID for the visual that you want the user to embed. This ID is
     * included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this visual.</p> <p>The Amazon Resource Name (ARN) of the
     * dashboard that the visual belongs to must be included in the
     * <code>AuthorizedResourceArns</code> parameter. Otherwise, the request will fail
     * with <code>InvalidParameterValueException</code>.</p>
     */
    inline void SetInitialDashboardVisualId(const DashboardVisualId& value) { m_initialDashboardVisualIdHasBeenSet = true; m_initialDashboardVisualId = value; }

    /**
     * <p>The visual ID for the visual that you want the user to embed. This ID is
     * included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this visual.</p> <p>The Amazon Resource Name (ARN) of the
     * dashboard that the visual belongs to must be included in the
     * <code>AuthorizedResourceArns</code> parameter. Otherwise, the request will fail
     * with <code>InvalidParameterValueException</code>.</p>
     */
    inline void SetInitialDashboardVisualId(DashboardVisualId&& value) { m_initialDashboardVisualIdHasBeenSet = true; m_initialDashboardVisualId = std::move(value); }

    /**
     * <p>The visual ID for the visual that you want the user to embed. This ID is
     * included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this visual.</p> <p>The Amazon Resource Name (ARN) of the
     * dashboard that the visual belongs to must be included in the
     * <code>AuthorizedResourceArns</code> parameter. Otherwise, the request will fail
     * with <code>InvalidParameterValueException</code>.</p>
     */
    inline RegisteredUserDashboardVisualEmbeddingConfiguration& WithInitialDashboardVisualId(const DashboardVisualId& value) { SetInitialDashboardVisualId(value); return *this;}

    /**
     * <p>The visual ID for the visual that you want the user to embed. This ID is
     * included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this visual.</p> <p>The Amazon Resource Name (ARN) of the
     * dashboard that the visual belongs to must be included in the
     * <code>AuthorizedResourceArns</code> parameter. Otherwise, the request will fail
     * with <code>InvalidParameterValueException</code>.</p>
     */
    inline RegisteredUserDashboardVisualEmbeddingConfiguration& WithInitialDashboardVisualId(DashboardVisualId&& value) { SetInitialDashboardVisualId(std::move(value)); return *this;}

  private:

    DashboardVisualId m_initialDashboardVisualId;
    bool m_initialDashboardVisualIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
