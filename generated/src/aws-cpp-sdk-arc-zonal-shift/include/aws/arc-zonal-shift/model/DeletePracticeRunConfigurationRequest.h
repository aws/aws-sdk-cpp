/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{

  /**
   */
  class DeletePracticeRunConfigurationRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API DeletePracticeRunConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePracticeRunConfiguration"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the resource that you want to delete the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The identifier for the resource that you want to delete the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the resource that you want to delete the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The identifier for the resource that you want to delete the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The identifier for the resource that you want to delete the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The identifier for the resource that you want to delete the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline DeletePracticeRunConfigurationRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The identifier for the resource that you want to delete the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline DeletePracticeRunConfigurationRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the resource that you want to delete the practice run
     * configuration for. The identifier is the Amazon Resource Name (ARN) for the
     * resource.</p>
     */
    inline DeletePracticeRunConfigurationRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}

  private:

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
