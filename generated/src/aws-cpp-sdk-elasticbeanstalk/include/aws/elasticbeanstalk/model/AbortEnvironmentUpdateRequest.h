/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/AbortEnvironmentUpdateMessage">AWS
   * API Reference</a></p>
   */
  class AbortEnvironmentUpdateRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API AbortEnvironmentUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AbortEnvironmentUpdate"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>This specifies the ID of the environment with the in-progress update that you
     * want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>This specifies the name of the environment with the in-progress update that
     * you want to cancel.</p>
     */
    inline AbortEnvironmentUpdateRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
