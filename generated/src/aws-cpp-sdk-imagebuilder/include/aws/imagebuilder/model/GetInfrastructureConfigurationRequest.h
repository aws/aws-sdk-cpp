﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>GetInfrastructureConfiguration request object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetInfrastructureConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class GetInfrastructureConfigurationRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetInfrastructureConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInfrastructureConfiguration"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the infrastructure configuration that you
     * want to retrieve.</p>
     */
    inline const Aws::String& GetInfrastructureConfigurationArn() const{ return m_infrastructureConfigurationArn; }
    inline bool InfrastructureConfigurationArnHasBeenSet() const { return m_infrastructureConfigurationArnHasBeenSet; }
    inline void SetInfrastructureConfigurationArn(const Aws::String& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = value; }
    inline void SetInfrastructureConfigurationArn(Aws::String&& value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn = std::move(value); }
    inline void SetInfrastructureConfigurationArn(const char* value) { m_infrastructureConfigurationArnHasBeenSet = true; m_infrastructureConfigurationArn.assign(value); }
    inline GetInfrastructureConfigurationRequest& WithInfrastructureConfigurationArn(const Aws::String& value) { SetInfrastructureConfigurationArn(value); return *this;}
    inline GetInfrastructureConfigurationRequest& WithInfrastructureConfigurationArn(Aws::String&& value) { SetInfrastructureConfigurationArn(std::move(value)); return *this;}
    inline GetInfrastructureConfigurationRequest& WithInfrastructureConfigurationArn(const char* value) { SetInfrastructureConfigurationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_infrastructureConfigurationArn;
    bool m_infrastructureConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
