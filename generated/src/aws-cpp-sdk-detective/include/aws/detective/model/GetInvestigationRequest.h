/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class GetInvestigationRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API GetInvestigationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInvestigation"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline GetInvestigationRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline GetInvestigationRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline GetInvestigationRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline const Aws::String& GetInvestigationId() const{ return m_investigationId; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline bool InvestigationIdHasBeenSet() const { return m_investigationIdHasBeenSet; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(const Aws::String& value) { m_investigationIdHasBeenSet = true; m_investigationId = value; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(Aws::String&& value) { m_investigationIdHasBeenSet = true; m_investigationId = std::move(value); }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(const char* value) { m_investigationIdHasBeenSet = true; m_investigationId.assign(value); }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline GetInvestigationRequest& WithInvestigationId(const Aws::String& value) { SetInvestigationId(value); return *this;}

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline GetInvestigationRequest& WithInvestigationId(Aws::String&& value) { SetInvestigationId(std::move(value)); return *this;}

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline GetInvestigationRequest& WithInvestigationId(const char* value) { SetInvestigationId(value); return *this;}

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_investigationId;
    bool m_investigationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
