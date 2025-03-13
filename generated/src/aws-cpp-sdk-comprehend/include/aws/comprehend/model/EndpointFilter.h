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
    AWS_COMPREHEND_API EndpointFilter() = default;
    AWS_COMPREHEND_API EndpointFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EndpointFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the model to which the endpoint is
     * attached.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    EndpointFilter& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the endpoint being returned. Possible values are:
     * Creating, Ready, Updating, Deleting, Failed.</p>
     */
    inline EndpointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EndpointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EndpointFilter& WithStatus(EndpointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a date before which the returned endpoint or endpoints were
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    EndpointFilter& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a date after which the returned endpoint or endpoints were
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    EndpointFilter& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    EndpointStatus m_status{EndpointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
