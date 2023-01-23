/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/m2/model/EngineType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/EnvironmentLifecycle.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Contains a subset of the possible runtime environment attributes. Used in the
   * environment list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/EnvironmentSummary">AWS
   * API Reference</a></p>
   */
  class EnvironmentSummary
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API EnvironmentSummary();
    AWS_MAINFRAMEMODERNIZATION_API EnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API EnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp when the runtime environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp when the runtime environment was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp when the runtime environment was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp when the runtime environment was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp when the runtime environment was created.</p>
     */
    inline EnvironmentSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp when the runtime environment was created.</p>
     */
    inline EnvironmentSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The target platform for the runtime environment.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p>The target platform for the runtime environment.</p>
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * <p>The target platform for the runtime environment.</p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * <p>The target platform for the runtime environment.</p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * <p>The target platform for the runtime environment.</p>
     */
    inline EnvironmentSummary& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p>The target platform for the runtime environment.</p>
     */
    inline EnvironmentSummary& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * <p>The version of the runtime engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the runtime engine.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the runtime engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the runtime engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version of the runtime engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the runtime engine.</p>
     */
    inline EnvironmentSummary& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the runtime engine.</p>
     */
    inline EnvironmentSummary& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the runtime engine.</p>
     */
    inline EnvironmentSummary& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a particular runtime environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a particular runtime environment.</p>
     */
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a particular runtime environment.</p>
     */
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArnHasBeenSet = true; m_environmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a particular runtime environment.</p>
     */
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a particular runtime environment.</p>
     */
    inline void SetEnvironmentArn(const char* value) { m_environmentArnHasBeenSet = true; m_environmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a particular runtime environment.</p>
     */
    inline EnvironmentSummary& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a particular runtime environment.</p>
     */
    inline EnvironmentSummary& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a particular runtime environment.</p>
     */
    inline EnvironmentSummary& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}


    /**
     * <p>The unique identifier of a particular runtime environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of a particular runtime environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The unique identifier of a particular runtime environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The unique identifier of a particular runtime environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of a particular runtime environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of a particular runtime environment.</p>
     */
    inline EnvironmentSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of a particular runtime environment.</p>
     */
    inline EnvironmentSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a particular runtime environment.</p>
     */
    inline EnvironmentSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The instance type of the runtime environment.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type of the runtime environment.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type of the runtime environment.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type of the runtime environment.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type of the runtime environment.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type of the runtime environment.</p>
     */
    inline EnvironmentSummary& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type of the runtime environment.</p>
     */
    inline EnvironmentSummary& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type of the runtime environment.</p>
     */
    inline EnvironmentSummary& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The name of the runtime environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the runtime environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the runtime environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the runtime environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the runtime environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the runtime environment.</p>
     */
    inline EnvironmentSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the runtime environment.</p>
     */
    inline EnvironmentSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the runtime environment.</p>
     */
    inline EnvironmentSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the runtime environment</p>
     */
    inline const EnvironmentLifecycle& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the runtime environment</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the runtime environment</p>
     */
    inline void SetStatus(const EnvironmentLifecycle& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the runtime environment</p>
     */
    inline void SetStatus(EnvironmentLifecycle&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the runtime environment</p>
     */
    inline EnvironmentSummary& WithStatus(const EnvironmentLifecycle& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the runtime environment</p>
     */
    inline EnvironmentSummary& WithStatus(EnvironmentLifecycle&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_environmentArn;
    bool m_environmentArnHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EnvironmentLifecycle m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
