﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/detective/model/DatasourcePackage.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class AWS_DETECTIVE_API UpdateDatasourcePackagesRequest : public DetectiveRequest
  {
  public:
    UpdateDatasourcePackagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatasourcePackages"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline bool GraphArnHasBeenSet() const { return m_graphArnHasBeenSet; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArnHasBeenSet = true; m_graphArn = value; }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArnHasBeenSet = true; m_graphArn.assign(value); }

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline UpdateDatasourcePackagesRequest& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline UpdateDatasourcePackagesRequest& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the behavior graph.</p>
     */
    inline UpdateDatasourcePackagesRequest& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The data source package start for the behavior graph.</p>
     */
    inline const Aws::Vector<DatasourcePackage>& GetDatasourcePackages() const{ return m_datasourcePackages; }

    /**
     * <p>The data source package start for the behavior graph.</p>
     */
    inline bool DatasourcePackagesHasBeenSet() const { return m_datasourcePackagesHasBeenSet; }

    /**
     * <p>The data source package start for the behavior graph.</p>
     */
    inline void SetDatasourcePackages(const Aws::Vector<DatasourcePackage>& value) { m_datasourcePackagesHasBeenSet = true; m_datasourcePackages = value; }

    /**
     * <p>The data source package start for the behavior graph.</p>
     */
    inline void SetDatasourcePackages(Aws::Vector<DatasourcePackage>&& value) { m_datasourcePackagesHasBeenSet = true; m_datasourcePackages = std::move(value); }

    /**
     * <p>The data source package start for the behavior graph.</p>
     */
    inline UpdateDatasourcePackagesRequest& WithDatasourcePackages(const Aws::Vector<DatasourcePackage>& value) { SetDatasourcePackages(value); return *this;}

    /**
     * <p>The data source package start for the behavior graph.</p>
     */
    inline UpdateDatasourcePackagesRequest& WithDatasourcePackages(Aws::Vector<DatasourcePackage>&& value) { SetDatasourcePackages(std::move(value)); return *this;}

    /**
     * <p>The data source package start for the behavior graph.</p>
     */
    inline UpdateDatasourcePackagesRequest& AddDatasourcePackages(const DatasourcePackage& value) { m_datasourcePackagesHasBeenSet = true; m_datasourcePackages.push_back(value); return *this; }

    /**
     * <p>The data source package start for the behavior graph.</p>
     */
    inline UpdateDatasourcePackagesRequest& AddDatasourcePackages(DatasourcePackage&& value) { m_datasourcePackagesHasBeenSet = true; m_datasourcePackages.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::Vector<DatasourcePackage> m_datasourcePackages;
    bool m_datasourcePackagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
