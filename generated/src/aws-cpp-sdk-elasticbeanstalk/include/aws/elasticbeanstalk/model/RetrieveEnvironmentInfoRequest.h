﻿/**
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
   * <p>Request to download logs retrieved with
   * <a>RequestEnvironmentInfo</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RetrieveEnvironmentInfoMessage">AWS
   * API Reference</a></p>
   */
  class RetrieveEnvironmentInfoRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API RetrieveEnvironmentInfoRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetrieveEnvironmentInfo"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the data's environment.</p> <p>If no such environment is found,
     * returns an <code>InvalidParameterValue</code> error.</p> <p>Condition: You must
     * specify either this or an EnvironmentName, or both. If you do not specify
     * either, AWS Elastic Beanstalk returns <code>MissingRequiredParameter</code>
     * error.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline RetrieveEnvironmentInfoRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline RetrieveEnvironmentInfoRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline RetrieveEnvironmentInfoRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data's environment.</p> <p> If no such environment is found,
     * returns an <code>InvalidParameterValue</code> error. </p> <p> Condition: You
     * must specify either this or an EnvironmentId, or both. If you do not specify
     * either, AWS Elastic Beanstalk returns <code>MissingRequiredParameter</code>
     * error. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline RetrieveEnvironmentInfoRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline RetrieveEnvironmentInfoRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline RetrieveEnvironmentInfoRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of information to retrieve.</p>
     */
    inline const EnvironmentInfoType& GetInfoType() const{ return m_infoType; }
    inline bool InfoTypeHasBeenSet() const { return m_infoTypeHasBeenSet; }
    inline void SetInfoType(const EnvironmentInfoType& value) { m_infoTypeHasBeenSet = true; m_infoType = value; }
    inline void SetInfoType(EnvironmentInfoType&& value) { m_infoTypeHasBeenSet = true; m_infoType = std::move(value); }
    inline RetrieveEnvironmentInfoRequest& WithInfoType(const EnvironmentInfoType& value) { SetInfoType(value); return *this;}
    inline RetrieveEnvironmentInfoRequest& WithInfoType(EnvironmentInfoType&& value) { SetInfoType(std::move(value)); return *this;}
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
