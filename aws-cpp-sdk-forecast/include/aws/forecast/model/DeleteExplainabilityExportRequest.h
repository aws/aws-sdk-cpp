/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class AWS_FORECASTSERVICE_API DeleteExplainabilityExportRequest : public ForecastServiceRequest
  {
  public:
    DeleteExplainabilityExportRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<DeleteExplainabilityExportRequest> Clone() const
    {
      return Aws::MakeUnique<DeleteExplainabilityExportRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteExplainabilityExport"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export to delete. </p>
     */
    inline const Aws::String& GetExplainabilityExportArn() const{ return m_explainabilityExportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export to delete. </p>
     */
    inline bool ExplainabilityExportArnHasBeenSet() const { return m_explainabilityExportArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export to delete. </p>
     */
    inline void SetExplainabilityExportArn(const Aws::String& value) { m_explainabilityExportArnHasBeenSet = true; m_explainabilityExportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export to delete. </p>
     */
    inline void SetExplainabilityExportArn(Aws::String&& value) { m_explainabilityExportArnHasBeenSet = true; m_explainabilityExportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export to delete. </p>
     */
    inline void SetExplainabilityExportArn(const char* value) { m_explainabilityExportArnHasBeenSet = true; m_explainabilityExportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export to delete. </p>
     */
    inline DeleteExplainabilityExportRequest& WithExplainabilityExportArn(const Aws::String& value) { SetExplainabilityExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export to delete. </p>
     */
    inline DeleteExplainabilityExportRequest& WithExplainabilityExportArn(Aws::String&& value) { SetExplainabilityExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability export to delete. </p>
     */
    inline DeleteExplainabilityExportRequest& WithExplainabilityExportArn(const char* value) { SetExplainabilityExportArn(value); return *this;}

  private:

    Aws::String m_explainabilityExportArn;
    bool m_explainabilityExportArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
