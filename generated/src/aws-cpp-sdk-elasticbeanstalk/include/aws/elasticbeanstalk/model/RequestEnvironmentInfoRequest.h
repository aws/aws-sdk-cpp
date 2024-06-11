/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/EnvironmentInfoType.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to retrieve logs from an environment and store them in your Elastic
   * Beanstalk storage bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RequestEnvironmentInfoMessage">AWS
   * API Reference</a></p>
   */
  class RequestEnvironmentInfoRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API RequestEnvironmentInfoRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RequestEnvironmentInfo"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentName, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline RequestEnvironmentInfoRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline RequestEnvironmentInfoRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline RequestEnvironmentInfoRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentId, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline RequestEnvironmentInfoRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline RequestEnvironmentInfoRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline RequestEnvironmentInfoRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of information to request.</p>
     */
    inline const EnvironmentInfoType& GetInfoType() const{ return m_infoType; }
    inline bool InfoTypeHasBeenSet() const { return m_infoTypeHasBeenSet; }
    inline void SetInfoType(const EnvironmentInfoType& value) { m_infoTypeHasBeenSet = true; m_infoType = value; }
    inline void SetInfoType(EnvironmentInfoType&& value) { m_infoTypeHasBeenSet = true; m_infoType = std::move(value); }
    inline RequestEnvironmentInfoRequest& WithInfoType(const EnvironmentInfoType& value) { SetInfoType(value); return *this;}
    inline RequestEnvironmentInfoRequest& WithInfoType(EnvironmentInfoType&& value) { SetInfoType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    EnvironmentInfoType m_infoType;
    bool m_infoTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
