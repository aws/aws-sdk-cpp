/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/SubscribedProjectInput.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The principal that is to be given a subscriptiong grant.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedPrincipalInput">AWS
   * API Reference</a></p>
   */
  class SubscribedPrincipalInput
  {
  public:
    AWS_DATAZONE_API SubscribedPrincipalInput();
    AWS_DATAZONE_API SubscribedPrincipalInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedPrincipalInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The project that is to be given a subscription grant.</p>
     */
    inline const SubscribedProjectInput& GetProject() const{ return m_project; }

    /**
     * <p>The project that is to be given a subscription grant.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The project that is to be given a subscription grant.</p>
     */
    inline void SetProject(const SubscribedProjectInput& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The project that is to be given a subscription grant.</p>
     */
    inline void SetProject(SubscribedProjectInput&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The project that is to be given a subscription grant.</p>
     */
    inline SubscribedPrincipalInput& WithProject(const SubscribedProjectInput& value) { SetProject(value); return *this;}

    /**
     * <p>The project that is to be given a subscription grant.</p>
     */
    inline SubscribedPrincipalInput& WithProject(SubscribedProjectInput&& value) { SetProject(std::move(value)); return *this;}

  private:

    SubscribedProjectInput m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
