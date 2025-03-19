/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/S3ConfigMap.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>The Amazon S3 location where the exported model artifacts are
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_CLEANROOMSML_API Destination() = default;
    AWS_CLEANROOMSML_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const S3ConfigMap& GetS3Destination() const { return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    template<typename S3DestinationT = S3ConfigMap>
    void SetS3Destination(S3DestinationT&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::forward<S3DestinationT>(value); }
    template<typename S3DestinationT = S3ConfigMap>
    Destination& WithS3Destination(S3DestinationT&& value) { SetS3Destination(std::forward<S3DestinationT>(value)); return *this;}
    ///@}
  private:

    S3ConfigMap m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
