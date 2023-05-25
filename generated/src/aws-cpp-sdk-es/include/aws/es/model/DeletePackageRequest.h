/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Container for request parameters to <code> <a>DeletePackage</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeletePackageRequest">AWS
   * API Reference</a></p>
   */
  class DeletePackageRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DeletePackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePackage"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Internal ID of the package that you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }

    /**
     * <p>Internal ID of the package that you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }

    /**
     * <p>Internal ID of the package that you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }

    /**
     * <p>Internal ID of the package that you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }

    /**
     * <p>Internal ID of the package that you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }

    /**
     * <p>Internal ID of the package that you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline DeletePackageRequest& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}

    /**
     * <p>Internal ID of the package that you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline DeletePackageRequest& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}

    /**
     * <p>Internal ID of the package that you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline DeletePackageRequest& WithPackageID(const char* value) { SetPackageID(value); return *this;}

  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
