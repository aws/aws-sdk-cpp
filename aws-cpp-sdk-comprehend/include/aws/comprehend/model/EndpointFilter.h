/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EndpointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{

  /**
   * <p>The filter used to determine which endpoints are returned. You can filter
   * jobs on their name, model, status, or the date and time that they were created.
   * You can only set one filter at a time. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EndpointFilter">AWS
   * API Reference</a></p>
   */
  class EndpointFilter
  {
  public:
    AWS_COMPREHEND_API EndpointFilter();
    AWS_COMPREHEND_API EndpointFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EndpointFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline EndpointFilter& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline EndpointFilter& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline EndpointFilter& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>Specifies the status of the endpoint being returned. Possible values are:
     * Creating, Ready, Updating, Deleting, Failed.</p>
     */
    inline const EndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of the endpoint being returned. Possible values are:
     * Creating, Ready, Updating, Deleting, Failed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the status of the endpoint being returned. Possible values are:
     * Creating, Ready, Updating, Deleting, Failed.</p>
     */
    inline void SetStatus(const EndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of the endpoint being returned. Possible values are:
     * Creating, Ready, Updating, Deleting, Failed.</p>
     */
    inline void SetStatus(EndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the status of the endpoint being returned. Possible values are:
     * Creating, Ready, Updating, Deleting, Failed.</p>
     */
    inline EndpointFilter& WithStatus(const EndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of the endpoint being returned. Possible values are:
     * Creating, Ready, Updating, Deleting, Failed.</p>
     */
    inline EndpointFilter& WithStatus(EndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies a date before which the returned endpoint or endpoints were
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Specifies a date before which the returned endpoint or endpoints were
     * created.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Specifies a date before which the returned endpoint or endpoints were
     * created.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Specifies a date before which the returned endpoint or endpoints were
     * created.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Specifies a date before which the returned endpoint or endpoints were
     * created.</p>
     */
    inline EndpointFilter& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Specifies a date before which the returned endpoint or endpoints were
     * created.</p>
     */
    inline EndpointFilter& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Specifies a date after which the returned endpoint or endpoints were
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Specifies a date after which the returned endpoint or endpoints were
     * created.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Specifies a date after which the returned endpoint or endpoints were
     * created.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Specifies a date after which the returned endpoint or endpoints were
     * created.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Specifies a date after which the returned endpoint or endpoints were
     * created.</p>
     */
    inline EndpointFilter& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Specifies a date after which the returned endpoint or endpoints were
     * created.</p>
     */
    inline EndpointFilter& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}

  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    EndpointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
