/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICBEANSTALK_API RequestEnvironmentInfoRequest : public ElasticBeanstalkRequest
  {
  public:
    RequestEnvironmentInfoRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RequestEnvironmentInfo"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentName, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentName, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The ID of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentName, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentName, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The ID of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentName, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentName, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline RequestEnvironmentInfoRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentName, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline RequestEnvironmentInfoRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentName, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline RequestEnvironmentInfoRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The name of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentId, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentId, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentId, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentId, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentId, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentId, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline RequestEnvironmentInfoRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentId, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline RequestEnvironmentInfoRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment of the requested data.</p> <p>If no such
     * environment is found, <code>RequestEnvironmentInfo</code> returns an
     * <code>InvalidParameterValue</code> error. </p> <p>Condition: You must specify
     * either this or an EnvironmentId, or both. If you do not specify either, AWS
     * Elastic Beanstalk returns <code>MissingRequiredParameter</code> error. </p>
     */
    inline RequestEnvironmentInfoRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The type of information to request.</p>
     */
    inline const EnvironmentInfoType& GetInfoType() const{ return m_infoType; }

    /**
     * <p>The type of information to request.</p>
     */
    inline bool InfoTypeHasBeenSet() const { return m_infoTypeHasBeenSet; }

    /**
     * <p>The type of information to request.</p>
     */
    inline void SetInfoType(const EnvironmentInfoType& value) { m_infoTypeHasBeenSet = true; m_infoType = value; }

    /**
     * <p>The type of information to request.</p>
     */
    inline void SetInfoType(EnvironmentInfoType&& value) { m_infoTypeHasBeenSet = true; m_infoType = std::move(value); }

    /**
     * <p>The type of information to request.</p>
     */
    inline RequestEnvironmentInfoRequest& WithInfoType(const EnvironmentInfoType& value) { SetInfoType(value); return *this;}

    /**
     * <p>The type of information to request.</p>
     */
    inline RequestEnvironmentInfoRequest& WithInfoType(EnvironmentInfoType&& value) { SetInfoType(std::move(value)); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    EnvironmentInfoType m_infoType;
    bool m_infoTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
